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

    void getStepX(unsigned char); // _ZN6Facing8getStepXEh
    void getStepY(unsigned char); // _ZN6Facing8getStepYEh
    void getStepZ(unsigned char); // _ZN6Facing8getStepZEh
    bool isHorizontal(unsigned char); // _ZN6Facing12isHorizontalEh
    void toString(unsigned char); // _ZN6Facing8toStringEh
    void getRandomFace(Random &); // _ZN6Facing13getRandomFaceER6Random
    void getRandomFaceHorizontal(Random &); // _ZN6Facing23getRandomFaceHorizontalER6Random
    void from2DDataValue(int); // _ZN6Facing15from2DDataValueEi
    void getClockWise(unsigned char); // _ZN6Facing12getClockWiseEh
    void getCounterClockWise(unsigned char); // _ZN6Facing19getCounterClockWiseEh
    void getOpposite(unsigned char); // _ZN6Facing11getOppositeEh
//  void rotateFace(unsigned char, Facing::Rotation); //TODO: incomplete function definition // _ZN6Facing10rotateFaceEhNS_8RotationE
    void fromVec3(Vec3 const&); // _ZN6Facing8fromVec3ERK4Vec3
//  void convertWeirdoDirectionToFacingDirection(WeirdoDirection); //TODO: incomplete function definition // _ZN6Facing39convertWeirdoDirectionToFacingDirectionE15WeirdoDirection
    void convertYRotationToFacingDirection(float); // _ZN6Facing33convertYRotationToFacingDirectionEf
};
