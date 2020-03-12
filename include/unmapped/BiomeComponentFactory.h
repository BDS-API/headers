#pragma once



class BiomeComponentFactory {

public:
    bool processDataComponents(Biome &, IWorldRegistriesProvider &, CompoundTag &)const;
    void registrationFinished();
//  void _shouldPopulateSchema(BiomeComponentFactory::ComponentScope); //TODO: incomplete function definition
    ~BiomeComponentFactory();
    bool processDataComponents(Biome &, IWorldRegistriesProvider &, Json::Value &)const;
//  BiomeComponentFactory(BiomeComponentFactory::FactoryScope); //TODO: incomplete function definition
};
