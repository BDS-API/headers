#pragma once

#include <memory>


class OceanMixerLayer /*MixerLayer<Biome *, Biome *, BiomeTemperatureCategory>*/ { //TODO: incomplete class definition

public:
    ~OceanMixerLayer(); // _ZN15OceanMixerLayerD2Ev
//  virtual void _fillArea(LayerDetails::WorkingData<Biome *, Biome *> &, int, int, int, int, int, LayerResult<BiomeTemperatureCategory>)const; //TODO: incomplete function definition // _ZNK15OceanMixerLayer9_fillAreaERN12LayerDetails11WorkingDataIP5BiomeS3_EEiiiii11LayerResultI24BiomeTemperatureCategoryE
    virtual void _getAreaRead(int, int, unsigned int, unsigned int)const; // _ZNK15OceanMixerLayer12_getAreaReadEiijj
    OceanMixerLayer(unsigned int, std::shared_ptr<Layer<Biome *>> &, std::shared_ptr<Layer<BiomeTemperatureCategory>> &, BiomeRegistry const&, Biome &, Biome &); // _ZN15OceanMixerLayerC2EjRSt10shared_ptrI5LayerIP5BiomeEERS0_IS1_I24BiomeTemperatureCategoryEERK13BiomeRegistryRS2_SE_
};
