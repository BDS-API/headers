#pragma once

class PieceWeight {

public:

    void doPlace(int);
    bool isValid(void);
    void PieceWeight(std::string const&, int, int, int, bool);
    void PieceWeight(PieceWeight&&);
};
