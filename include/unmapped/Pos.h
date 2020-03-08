#pragma once



class Pos {

public:

    Pos(void);
    Pos(int, int, int);
    void operator-(Pos const&)const;
    Pos(Pos const&);
};
