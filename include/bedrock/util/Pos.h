#pragma once



class Pos {

public:
    Pos(int, int, int);
    void operator+(int)const;
    void operator+(Pos const&)const;
    void operator*(int)const;
    Pos();
    void operator==(Pos const&)const;
    Pos(Pos const&);
    void operator-(Pos const&)const;
};
