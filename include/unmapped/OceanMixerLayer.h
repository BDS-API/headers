#pragma once

#include "BiomeRegistry.h"
#include "../bedrock/level/biome/Biome.h"
#include <memory>


class OceanMixerLayer /*MixerLayer<Biome *, Biome *, BiomeTemperatureCategory>*/ { //TODO: incomplete class definition

public:
    ~OceanMixerLayer();
    virtual void _getAreaRead(int, int, unsigned int, unsigned int)const;
//  virtual void _fillArea(LayerDetails::WorkingData<Biome *, Biome *> &, int, int, int, int, int, LayerResult<BiomeTemperatureCategory>)const; //TODO: incomplete function definition
//  OceanMixerLayer(unsigned int, std::shared_ptr<Layer<Biome *>> &, std::shared_ptr<Layer<BiomeTemperatureCategory>> &, BiomeRegistry const&, Biome &, Biome &); //TODO: incomplete function definition
};
