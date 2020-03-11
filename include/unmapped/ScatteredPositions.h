#pragma once

#include "./ScatterParams.h"
#include "./RenderParams.h"
#include "../bedrock/util/Random.h"


namespace ScatterParams {

class ScatteredPositions {

public:

    ScatteredPositions(ScatterParams const&, RenderParams &, Random &);
    void nextPos();
    void size();
    void empty();
};

}