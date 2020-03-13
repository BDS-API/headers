#pragma once

#include <memory>


class RegionHillsLayer /*MixerLayer<Biome *, Biome *>*/ { //TODO: incomplete class definition

public:
    ~RegionHillsLayer(); // _ZN16RegionHillsLayerD2Ev
//  virtual void _fillArea(LayerDetails::WorkingData<Biome *, Biome *> &, int, int, int, int, int)const; //TODO: incomplete function definition // _ZNK16RegionHillsLayer9_fillAreaERN12LayerDetails11WorkingDataIP5BiomeS3_EEiiiii
    virtual void _getAreaRead(int, int, unsigned int, unsigned int)const; // _ZNK16RegionHillsLayer12_getAreaReadEiijj
    RegionHillsLayer(unsigned int, std::shared_ptr<Layer<Biome *>> &, std::shared_ptr<Layer<int>> &, BiomeRegistry const&); // _ZN16RegionHillsLayerC2EjRSt10shared_ptrI5LayerIP5BiomeEERS0_IS1_IiEERK13BiomeRegistry
};
