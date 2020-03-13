#pragma once



class Pos {

public:
    Pos(); // _ZN3PosC2Ev
    Pos(int, int, int); // _ZN3PosC2Eiii
    void operator-(Pos const&)const; // _ZNK3PosmiERKS_
    void operator+(int)const; // _ZNK3PosplEi
    Pos(Pos const&); // _ZN3PosC2ERKS_
    void operator==(Pos const&)const; // _ZNK3PoseqERKS_
    void operator*(int)const; // _ZNK3PosmlEi
    void operator+(Pos const&)const; // _ZNK3PosplERKS_
};
