#pragma once

#include <functional>


namespace TickUtil {

    void getDeterministicBounds(Bounds const&); // _ZN8TickUtil22getDeterministicBoundsERK6Bounds
    void getRandomInBounds(Bounds const&, Random &); // _ZN8TickUtil17getRandomInBoundsERK6BoundsR6Random
    void forRandomOffset(unsigned char, unsigned char, unsigned char, unsigned char, std::function<void (Pos const&)>); // _ZN8TickUtil15forRandomOffsetEhhhhSt8functionIFvRK3PosEE
    void chunkBoundsToGridBounds(Pos const&, Pos const&); // _ZN8TickUtil23chunkBoundsToGridBoundsERK3PosS2_
};
