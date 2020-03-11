#pragma once

#include "../bedrock/util/Random.h"
#include <functional>
#include "./Bounds.h"
#include "./Pos.h"


class TickUtil {

public:

    void getDeterministicBounds(Bounds const&);
    void getRandomInBounds(Bounds const&, Random &);
//  void forRandomOffset(unsigned char, unsigned char, unsigned char, unsigned char, std::function<void (Pos const&)>); //TODO: incomplete function definition
    void chunkBoundsToGridBounds(Pos const&, Pos const&);
};
