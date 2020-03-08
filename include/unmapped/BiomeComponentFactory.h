#pragma once

#include "../bedrock/level/biome/Biome"
#include "../json/Value"
#include "../bedrock/nbt/CompoundTag"


class BiomeComponentFactory {

public:

    void _shouldPopulateSchema(BiomeComponentFactory::ComponentScope);
    BiomeComponentFactory(BiomeComponentFactory::FactoryScope);
    bool processDataComponents(Biome &, IWorldRegistriesProvider &, Json::Value &)const;
    bool processDataComponents(Biome &, IWorldRegistriesProvider &, CompoundTag &)const;
    void registrationFinished();
};
