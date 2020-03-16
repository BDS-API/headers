#pragma once

#include <memory>


class RegionHillsLayer /*public MixerLayer<Biome *, Biome *>*/ { //TODO: incomplete class definition

public:
    virtual ~RegionHillsLayer(); // _ZN16RegionHillsLayerD2Ev
    virtual void __fake_function0(); // fake
    virtual void _fillArea__incomplete0(long &, int, int, int, int, int)const; //TODO: incomplete function definition // _ZNK16RegionHillsLayer9_fillAreaERN12LayerDetails11WorkingDataIP5BiomeS3_EEiiiii
    virtual void _getAreaRead(int, int, unsigned int, unsigned int)const; // _ZNK16RegionHillsLayer12_getAreaReadEiijj
    RegionHillsLayer(unsigned int, std::shared_ptr<long> &, std::shared_ptr<long> &, BiomeRegistry const&); // _ZN16RegionHillsLayerC2EjRSt10shared_ptrI5LayerIP5BiomeEERS0_IS1_IiEERK13BiomeRegistry
};
