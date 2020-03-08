#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/util/Vec3"


class Facing {

public:
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


    void getStepX(unsigned char);
    void getStepY(unsigned char);
    void getStepZ(unsigned char);
    bool isHorizontal(unsigned char);
    void toString(unsigned char);
    void getRandomFace(Random &);
    void getRandomFaceHorizontal(Random &);
    void from2DDataValue(int);
    void getClockWise(unsigned char);
    void getCounterClockWise(unsigned char);
    void getOpposite(unsigned char);
    void rotateFace(unsigned char, Facing::Rotation);
    void fromVec3(Vec3 const&);
    void convertWeirdoDirectionToFacingDirection(WeirdoDirection);
    void convertYRotationToFacingDirection(float);
};
