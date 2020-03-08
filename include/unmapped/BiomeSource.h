#pragma once

#include "../bedrock/util/BlockPos"


class BiomeSource {

public:
    BiomeSource::~BiomeSource()

    void getBiome(BlockPos const&)const;
    BiomeSource(void);
};
