#pragma once

class PieceWeight {

public:

    void doPlace(int);
    bool isValid(void);
    void PieceWeight(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, int, int, bool);
    void PieceWeight(PieceWeight&&);
};
