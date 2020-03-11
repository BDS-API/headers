#pragma once

#include "./IWorldRegistriesProvider.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/level/biome/Biome.h"
#include "../json/Value.h"


class BiomeComponentFactory {

public:

    ~BiomeComponentFactory();
//  void _shouldPopulateSchema(BiomeComponentFactory::ComponentScope); //TODO: incomplete function definition
//  BiomeComponentFactory(BiomeComponentFactory::FactoryScope); //TODO: incomplete function definition
    bool processDataComponents(Biome &, IWorldRegistriesProvider &, Json::Value &)const;
    bool processDataComponents(Biome &, IWorldRegistriesProvider &, CompoundTag &)const;
    void registrationFinished();
};
