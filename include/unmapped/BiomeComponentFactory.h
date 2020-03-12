#pragma once

#include "../json/Value.h"
#include "IWorldRegistriesProvider.h"
#include "../bedrock/level/biome/Biome.h"
#include "../bedrock/nbt/CompoundTag.h"


class BiomeComponentFactory {

public:
//  BiomeComponentFactory(BiomeComponentFactory::FactoryScope); //TODO: incomplete function definition
    bool processDataComponents(Biome &, IWorldRegistriesProvider &, CompoundTag &)const;
    ~BiomeComponentFactory();
    void registrationFinished();
//  void _shouldPopulateSchema(BiomeComponentFactory::ComponentScope); //TODO: incomplete function definition
    bool processDataComponents(Biome &, IWorldRegistriesProvider &, Json::Value &)const;
};
