#pragma once

class VanillaOverworldBiomeSource : LayerBiomeSource {

    virtual void VanillaOverworldBiomeSource::~VanillaOverworldBiomeSource();
    virtual void VanillaOverworldBiomeSource::~VanillaOverworldBiomeSource();
    virtual void fillBiomes(LevelChunk &)const;
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void containsOnly(int, int, int, gsl::span<int const, -1l>)const;
    virtual void getBiome(int, int)const;
}
