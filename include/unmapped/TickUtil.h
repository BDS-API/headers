#pragma once

#include "../bedrock/util/Random.h"
#include "Bounds.h"
#include "../bedrock/util/Pos.h"
#include <functional>


namespace TickUtil {

    void forRandomOffset(unsigned char, unsigned char, unsigned char, unsigned char, std::function<void (Pos const&)>);
    void chunkBoundsToGridBounds(Pos const&, Pos const&);
    void getRandomInBounds(Bounds const&, Random &);
    void getDeterministicBounds(Bounds const&);
};
