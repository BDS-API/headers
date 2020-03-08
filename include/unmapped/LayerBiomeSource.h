#pragma once

#include "../bedrock/level/LevelChunk"
#include "../bedrock/level/biome/Biome"


class LayerBiomeSource : BiomeSource {

public:
    virtual LayerBiomeSource::~LayerBiomeSource();
    virtual void fillBiomes(LevelChunk &)const;
    virtual void getBiome(int, int)const;

    LayerBiomeSource(std::shared_ptr<Layer<Biome *> const>);
    void _getBiomeArea(Layer<Biome *> const&, BoundingBox const&, unsigned int, BiomeArea &)const;
    void _getBlockResolutionLayer(void)const;
};
