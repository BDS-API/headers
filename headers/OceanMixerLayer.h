#pragma once

class OceanMixerLayer : MixerLayer_ltBiome::_Biome::_BiomeTemperatureCategory_ge {

    virtual void OceanMixerLayer::~OceanMixerLayer();
    virtual void OceanMixerLayer::~OceanMixerLayer();
    virtual void MixerLayer<Biome *, Biome *, BiomeTemperatureCategory>::init(long);
    virtual void MixerLayer<Biome *, Biome *, BiomeTemperatureCategory>::_allocateAndFill(unsigned long, int, int, unsigned int, unsigned int)const;
    virtual void _fillArea(LayerDetails::WorkingData<Biome *, Biome *> &, int, int, int, int, int, LayerResult<BiomeTemperatureCategory>)const;
    virtual void _getAreaRead(int, int, unsigned int, unsigned int)const;
}
