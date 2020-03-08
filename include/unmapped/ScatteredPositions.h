#pragma once

#include "../bedrock/util/Random"


using namespace ScatterParams;

class ScatteredPositions {

public:

    ScatteredPositions(ScatterParams const&, RenderParams &, Random &);
    void nextPos();
    void size();
    void empty();
};
