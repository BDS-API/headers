#pragma once



class PieceWeight {

public:

    void doPlace(int);
    bool isValid(void);
    PieceWeight(std::string const&, int, int, int, bool);
    PieceWeight(PieceWeight&&);
};
