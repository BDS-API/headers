#pragma once



class BiomeComponentFactory {

public:
    ~BiomeComponentFactory(); // _ZN21BiomeComponentFactoryD2Ev
//  void _shouldPopulateSchema(BiomeComponentFactory::ComponentScope); //TODO: incomplete function definition // _ZN21BiomeComponentFactory21_shouldPopulateSchemaENS_14ComponentScopeE
//  BiomeComponentFactory(BiomeComponentFactory::FactoryScope); //TODO: incomplete function definition // _ZN21BiomeComponentFactoryC2ENS_12FactoryScopeE
    bool processDataComponents(Biome &, IWorldRegistriesProvider &, Json::Value &)const; // _ZNK21BiomeComponentFactory21processDataComponentsER5BiomeR24IWorldRegistriesProviderRN4Json5ValueE
    bool processDataComponents(Biome &, IWorldRegistriesProvider &, CompoundTag &)const; // _ZNK21BiomeComponentFactory21processDataComponentsER5BiomeR24IWorldRegistriesProviderR11CompoundTag
    void registrationFinished(); // _ZN21BiomeComponentFactory20registrationFinishedEv
};
