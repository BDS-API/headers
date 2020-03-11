#pragma once

#include "./Pos.h"


class Pos {

public:

    Pos();
    Pos(int, int, int);
    void operator-(Pos const&)const;
    void operator+(int)const;
    Pos(Pos const&);
    void operator==(Pos const&)const;
    void operator*(int)const;
    void operator+(Pos const&)const;
};
