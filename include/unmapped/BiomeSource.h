#pragma once

#include "../bedrock/util/BlockPos.h"


class BiomeSource {

public:
    virtual ~BiomeSource();

    void getBiome(BlockPos const&)const;
    BiomeSource();
};
