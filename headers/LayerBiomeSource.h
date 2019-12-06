#pragma once

class LayerBiomeSource : BiomeSource {

public:
    virtual ~LayerBiomeSource();
    virtual void fillBiomes(LevelChunk &)const;
    virtual void getBiome(int, int)const;

    void LayerBiomeSource(std::shared_ptr<Layer<Biome *> const>);
    void _getBiomeArea(Layer<Biome *> const&, BoundingBox const&, unsigned int, BiomeArea &)const;
    void _getBlockResolutionLayer(void)const;
};
