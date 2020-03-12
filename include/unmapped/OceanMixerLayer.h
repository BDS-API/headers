#pragma once

#include <memory>


class OceanMixerLayer /*MixerLayer<Biome *, Biome *, BiomeTemperatureCategory>*/ { //TODO: incomplete class definition

public:
//  virtual void _fillArea(LayerDetails::WorkingData<Biome *, Biome *> &, int, int, int, int, int, LayerResult<BiomeTemperatureCategory>)const; //TODO: incomplete function definition
    ~OceanMixerLayer();
    virtual void _getAreaRead(int, int, unsigned int, unsigned int)const;
    OceanMixerLayer(unsigned int, std::shared_ptr<Layer<Biome *>> &, std::shared_ptr<Layer<BiomeTemperatureCategory>> &, BiomeRegistry const&, Biome &, Biome &);
};
