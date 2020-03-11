#pragma once

#include "./BiomeRegistry.h"
#include <memory>
#include "../bedrock/level/biome/Biome.h"


class OceanMixerLayer /*MixerLayer<Biome *, Biome *, BiomeTemperatureCategory>*/ { //TODO: incomplete class definition

public:
    virtual ~OceanMixerLayer();
//  virtual void _fillArea(LayerDetails::WorkingData<Biome *, Biome *> &, int, int, int, int, int, LayerResult<BiomeTemperatureCategory>)const; //TODO: incomplete function definition
    virtual void _getAreaRead(int, int, unsigned int, unsigned int)const;

//  OceanMixerLayer(unsigned int, std::shared_ptr<Layer<Biome *>> &, std::shared_ptr<Layer<BiomeTemperatureCategory>> &, BiomeRegistry const&, Biome &, Biome &); //TODO: incomplete function definition
};
