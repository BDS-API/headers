#pragma once

class BiomeSource {

public:
    virtual BiomeSource::~BiomeSource();

    void getBiome(BlockPos const&)const;
    BiomeSource(void);
};
