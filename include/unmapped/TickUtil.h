#pragma once

#include "../bedrock/util/Random"


class TickUtil {

public:

    void getDeterministicBounds(Bounds const&);
    void getRandomInBounds(Bounds const&, Random &);
    void forRandomOffset(unsigned char, unsigned char, unsigned char, unsigned char, std::function<void ()(Pos const&)>);
    void chunkBoundsToGridBounds(Pos const&, Pos const&);
};
