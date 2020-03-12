#pragma once

#include <string>


class PieceWeight {

public:
    PieceWeight(PieceWeight &&);
    void doPlace(int);
    ~PieceWeight();
    PieceWeight(std::string const&, int, int, int, bool);
    bool isValid();
};
