#pragma once

#include "../bedrock/util/Random"


using namespace ScatterParams;

class CoordinateRange {

public:

    CoordinateRange(void);
    CoordinateRange(ScatterParams::CoordinateRange const&);
    void eval(unsigned int &, Random &, RenderParams &)const;
};
