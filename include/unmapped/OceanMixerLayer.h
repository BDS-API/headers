#pragma once

#include "../bedrock/level/biome/Biome"


class OceanMixerLayer : MixerLayer<Biome *, Biome *, BiomeTemperatureCategory> {

public:
    virtual OceanMixerLayer::~OceanMixerLayer()
    virtual void _fillArea(LayerDetails::WorkingData<Biome *, Biome *> &, int, int, int, int, int, LayerResult<BiomeTemperatureCategory>)const;
    virtual void _getAreaRead(int, int, unsigned int, unsigned int)const;

    OceanMixerLayer(unsigned int, std::shared_ptr<Layer<Biome *>> &, std::shared_ptr&<Layer<BiomeTemperatureCategory>>, BiomeRegistry const&, Biome&, Biome&);
};
