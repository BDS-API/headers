#pragma once

class Direction {

public:
    static long Direction::DIRECTION_FACING;
    static long Direction::FACING_DIRECTION;
    static long Direction::DIRECTION_OPPOSITE;
    static long Direction::DIRECTION_CLOCKWISE;
    static long Direction::DIRECTION_COUNTER_CLOCKWISE;
    static long Direction::RELATIVE_DIRECTION_FACING;
    static long Direction::STEP_X;
    static long Direction::STEP_Z;


    void getDirection(float, float);
    void getDirection(int, int, int, int);
};
