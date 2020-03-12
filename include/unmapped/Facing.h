#pragma once



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

    void getRandomFaceHorizontal(Random &);
    void getOpposite(unsigned char);
    void convertYRotationToFacingDirection(float);
    void fromVec3(Vec3 const&);
    void getStepY(unsigned char);
    void getStepZ(unsigned char);
    void toString(unsigned char);
    bool isHorizontal(unsigned char);
//  void rotateFace(unsigned char, Facing::Rotation); //TODO: incomplete function definition
    void getStepX(unsigned char);
    void from2DDataValue(int);
    void getCounterClockWise(unsigned char);
    void getClockWise(unsigned char);
    void getRandomFace(Random &);
//  void convertWeirdoDirectionToFacingDirection(WeirdoDirection); //TODO: incomplete function definition
};
