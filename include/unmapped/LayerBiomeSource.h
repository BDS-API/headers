#pragma once

#include <memory>
#include "BiomeSource.h"


class LayerBiomeSource : BiomeSource {

public:
    ~LayerBiomeSource(); // _ZN16LayerBiomeSourceD2Ev
    virtual void fillBiomes(LevelChunk &)const; // _ZNK16LayerBiomeSource10fillBiomesER10LevelChunk
    virtual void getBiome(int, int)const; // _ZNK16LayerBiomeSource8getBiomeEii
    LayerBiomeSource(std::shared_ptr<Layer<Biome *> const>); // _ZN16LayerBiomeSourceC2ESt10shared_ptrIK5LayerIP5BiomeEE
//  void _getBiomeArea(Layer<Biome *> const&, BoundingBox const&, unsigned int, BiomeArea &)const; //TODO: incomplete function definition // _ZNK16LayerBiomeSource13_getBiomeAreaERK5LayerIP5BiomeERK11BoundingBoxjR9BiomeArea
    void _getBlockResolutionLayer()const; // _ZNK16LayerBiomeSource24_getBlockResolutionLayerEv
};
