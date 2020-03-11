#pragma once

#include "./PieceWeight.h"
#include <string>


class PieceWeight {

public:

    void doPlace(int);
    bool isValid();
    ~PieceWeight();
    PieceWeight(std::string const&, int, int, int, bool);
    PieceWeight(PieceWeight &&);
};
