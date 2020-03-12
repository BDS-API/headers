#pragma once

#include <string>


class PieceWeight {

public:
    PieceWeight(std::string const&, int, int, int, bool);
    PieceWeight(PieceWeight &&);
    ~PieceWeight();
    void doPlace(int);
    bool isValid();
};
