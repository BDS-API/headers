#pragma once

#include "../bedrock/util/Random.h"
#include "./RenderParams.h"
#include "./CoordinateRange.h"


namespace ScatterParams {

class CoordinateRange {

public:

    ~CoordinateRange();
    CoordinateRange();
    CoordinateRange(ScatterParams::CoordinateRange const&);
    void eval(unsigned int &, Random &, RenderParams &)const;
};

}