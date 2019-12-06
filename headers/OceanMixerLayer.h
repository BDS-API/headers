#pragma once

class OceanMixerLayer : MixerLayer_ltBiome::_Biome::_BiomeTemperatureCategory_ge {

public:
    virtual ~OceanMixerLayer();
    virtual void _fillArea(LayerDetails::WorkingData<Biome *, Biome *> &, int, int, int, int, int, LayerResult<BiomeTemperatureCategory>)const;
    virtual void _getAreaRead(int, int, unsigned int, unsigned int)const;

    void OceanMixerLayer(unsigned int, std::shared_ptr<Layer<Biome *>> &, std::shared_ptr&<Layer<BiomeTemperatureCategory>>, BiomeRegistry const&, Biome&, Biome&);
};
