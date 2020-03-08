#pragma once



class Direction {

public:
    static long DIRECTION_FACING;
    static long FACING_DIRECTION;
    static long DIRECTION_OPPOSITE;
    static long DIRECTION_CLOCKWISE;
    static long DIRECTION_COUNTER_CLOCKWISE;
    static long RELATIVE_DIRECTION_FACING;
    static long STEP_X;
    static long STEP_Z;


    void getDirection(float, float);
    void getDirection(int, int, int, int);
};
