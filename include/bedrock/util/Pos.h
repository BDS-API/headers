#pragma once



class Pos {

public:
    void operator==(Pos const&)const;
    void operator+(Pos const&)const;
    void operator+(int)const;
    void operator-(Pos const&)const;
    Pos(Pos const&);
    Pos();
    void operator*(int)const;
    Pos(int, int, int);
};
