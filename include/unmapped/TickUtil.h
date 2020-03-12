#pragma once

#include <functional>


namespace TickUtil {

    void getRandomInBounds(Bounds const&, Random &);
    void chunkBoundsToGridBounds(Pos const&, Pos const&);
    void forRandomOffset(unsigned char, unsigned char, unsigned char, unsigned char, std::function<void (Pos const&)>);
    void getDeterministicBounds(Bounds const&);
};
