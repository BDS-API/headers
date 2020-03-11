#pragma once

#include "./Block.h"
#include "../bedrock/util/Color.h"


class MapSample {

public:

    MapSample();
    MapSample(Color const&, Block const&, short);
};
