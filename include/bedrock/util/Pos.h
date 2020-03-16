#pragma once



class Pos {

public:
    int x;
    int y;
    int z;

    Pos() {
        this->x = 0;
        this->y = 0;
        this->z = 0;
    } // _ZN3PosC2Ev
    Pos(int x, int y, int z) {
        this->x = x;
        this->y = y;
        this->z = z;
    } // _ZN3PosC2Eiii
    void operator-(Pos const&)const; // _ZNK3PosmiERKS_
    void operator+(int)const; // _ZNK3PosplEi
    Pos(Pos const& pos) {
        this->x = pos.x;
        this->y = pos.y;
        this->z = pos.z;
    } // _ZN3PosC2ERKS_
    void operator==(Pos const&)const; // _ZNK3PoseqERKS_
    void operator*(int)const; // _ZNK3PosmlEi
    void operator+(Pos const&)const; // _ZNK3PosplERKS_
};
