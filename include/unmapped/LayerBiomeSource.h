#pragma once

#include <memory>
#include "BiomeSource.h"


class LayerBiomeSource : BiomeSource {

public:
    virtual void getBiome(int, int)const;
    virtual void fillBiomes(LevelChunk &)const;
    ~LayerBiomeSource();
    LayerBiomeSource(std::shared_ptr<Layer<Biome *> const>);
//  void _getBiomeArea(Layer<Biome *> const&, BoundingBox const&, unsigned int, BiomeArea &)const; //TODO: incomplete function definition
    void _getBlockResolutionLayer()const;
};
