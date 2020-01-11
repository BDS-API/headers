#pragma once

class VanillaOverworldBiomeSource : LayerBiomeSource {

public:
    virtual VanillaOverworldBiomeSource::~VanillaOverworldBiomeSource();
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void containsOnly(int, int, int, gsl::span<int const, -1l>)const;

    VanillaOverworldBiomeSource(std::shared_ptr<Layer<Biome *> const>, std::shared_ptr<Layer<Biome *> const>);
};