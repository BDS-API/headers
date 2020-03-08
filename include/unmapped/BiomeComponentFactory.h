#pragma once

#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/level/biome/Biome"
#include "../json/Value"


class BiomeComponentFactory {

public:

    void _shouldPopulateSchema(BiomeComponentFactory::ComponentScope);
    BiomeComponentFactory(BiomeComponentFactory::FactoryScope);
    bool processDataComponents(Biome &, IWorldRegistriesProvider &, Json::Value &)const;
    bool processDataComponents(Biome &, IWorldRegistriesProvider &, CompoundTag &)const;
    void registrationFinished();
};
