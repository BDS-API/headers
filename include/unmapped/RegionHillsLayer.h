#pragma once

#include "../bedrock/level/biome/Biome"


class RegionHillsLayer : MixerLayer<Biome *, Biome *> {

public:
    virtual RegionHillsLayer::~RegionHillsLayer()
    virtual void _fillArea(LayerDetails::WorkingData<Biome *, Biome *> &, int, int, int, int, int)const;
    virtual void _getAreaRead(int, int, unsigned int, unsigned int)const;

    RegionHillsLayer(unsigned int, std::shared_ptr<Layer<Biome *>> &, std::shared_ptr&<Layer<int>>, BiomeRegistry const&);
};
