#pragma once

class Facing {

public:
    static long Facing::OPPOSITE_FACING;
    static long Facing::STEP_X;
    static long Facing::STEP_Y;
    static long Facing::STEP_Z;
    static long Facing::DIRECTIONS;
    static long Facing::BY2DDATA;
    static long Facing::FACINGMASK;
    static long Facing::FACINGMASK_INV;
    static long Facing::NORMAL;
    static long Facing::DIRECTION;
    static long Facing::ALL_FACES;
    static long Facing::ALL_EXCEPT;
    static long Facing::ALL_EXCEPT_AXIS_Y;


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
