#pragma once

#include <memory>


class OceanMixerLayer /*public MixerLayer<Biome *, Biome *, BiomeTemperatureCategory>*/ { //TODO: incomplete class definition

public:
    virtual ~OceanMixerLayer(); // _ZN15OceanMixerLayerD2Ev
    virtual void __fake_function0(); // fake
    virtual void _fillArea__incomplete0(long &, int, int, int, int, int, long)const; //TODO: incomplete function definition // _ZNK15OceanMixerLayer9_fillAreaERN12LayerDetails11WorkingDataIP5BiomeS3_EEiiiii11LayerResultI24BiomeTemperatureCategoryE
    virtual void _getAreaRead(int, int, unsigned int, unsigned int)const; // _ZNK15OceanMixerLayer12_getAreaReadEiijj
    OceanMixerLayer(unsigned int, std::shared_ptr<long> &, std::shared_ptr<long> &, BiomeRegistry const&, Biome &, Biome &); // _ZN15OceanMixerLayerC2EjRSt10shared_ptrI5LayerIP5BiomeEERS0_IS1_I24BiomeTemperatureCategoryEERK13BiomeRegistryRS2_SE_
};
