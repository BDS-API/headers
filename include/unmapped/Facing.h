#pragma once

#include "../bedrock/util/Random.h"
#include "../bedrock/util/Vec3.h"


namespace Facing {

    static long OPPOSITE_FACING;
    static long STEP_X;
    static long STEP_Y;
    static long STEP_Z;
    static long DIRECTIONS;
    static long BY2DDATA;
    static long FACINGMASK;
    static long FACINGMASK_INV;
    static long NORMAL;
    static long DIRECTION;
    static long ALL_FACES;
    static long ALL_EXCEPT;
    static long ALL_EXCEPT_AXIS_Y;

    void getClockWise(unsigned char);
    void fromVec3(Vec3 const&);
//  void convertWeirdoDirectionToFacingDirection(WeirdoDirection); //TODO: incomplete function definition
    void from2DDataValue(int);
    void getStepY(unsigned char);
    void getRandomFaceHorizontal(Random &);
    void getRandomFace(Random &);
    void toString(unsigned char);
    void convertYRotationToFacingDirection(float);
    void getStepX(unsigned char);
    void getOpposite(unsigned char);
//  void rotateFace(unsigned char, Facing::Rotation); //TODO: incomplete function definition
    bool isHorizontal(unsigned char);
    void getStepZ(unsigned char);
    void getCounterClockWise(unsigned char);
};
