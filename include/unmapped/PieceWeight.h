#pragma once

#include <string>


class PieceWeight {

public:
    void doPlace(int); // _ZN11PieceWeight7doPlaceEi
    bool isValid(); // _ZN11PieceWeight7isValidEv
    ~PieceWeight(); // _ZN11PieceWeightD2Ev
    PieceWeight(std::string const&, int, int, int, bool); // _ZN11PieceWeightC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiiib
    PieceWeight(PieceWeight &&); // _ZN11PieceWeightC2EOS_
};
