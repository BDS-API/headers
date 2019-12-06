#pragma once

class BiomeSource {

public:
    virtual ~BiomeSource();

    void getBiome(BlockPos const&)const;
    void BiomeSource(void);
};
