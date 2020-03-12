#pragma once



class BiomeSource {

public:
    ~BiomeSource();
    BiomeSource();
    void getBiome(BlockPos const&)const;
};
