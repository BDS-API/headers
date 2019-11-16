#pragma once

class LayerBiomeSource : BiomeSource {

    virtual void Layer~LayerBiomeSource();
    virtual void Layer~LayerBiomeSource();
    virtual void LayerfillBiomes(LevelChunk &)const;
    virtual void LayergetBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void LayercontainsOnly(int, int, int, gsl::span<int const, -1l>)const;
    virtual void LayergetBiome(int, int)const;
}
