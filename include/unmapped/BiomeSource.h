#pragma once

#include "../bedrock/util/BlockPos.h"


class BiomeSource {

public:
    ~BiomeSource();
    BiomeSource();
    void getBiome(BlockPos const&)const;
};
