#pragma once

class Pos {

public:

    void Pos(void);
    void Pos(int, int, int);
    void operator-(Pos const&)const;
    void Pos(Pos const&);
};
