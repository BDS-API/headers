#pragma once

#include "./BiomeArea.h"
#include "./BiomeSource.h"
#include <memory>
#include "./BoundingBox.h"
#include "../bedrock/level/LevelChunk.h"
#include "../bedrock/level/biome/Biome.h"


class LayerBiomeSource : BiomeSource {

public:
    virtual ~LayerBiomeSource();
    virtual void fillBiomes(LevelChunk &)const;
    virtual void getBiome(int, int)const;

//  LayerBiomeSource(std::shared_ptr<Layer<Biome *> const>); //TODO: incomplete function definition
//  void _getBiomeArea(Layer<Biome *> const&, BoundingBox const&, unsigned int, BiomeArea &)const; //TODO: incomplete function definition
    void _getBlockResolutionLayer()const;
};
