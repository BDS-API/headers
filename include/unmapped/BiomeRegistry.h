#pragma once

#include "./IWorldRegistriesProvider.h"
#include "../bedrock/pack/ResourcePackManager.h"
#include "../json/Value.h"
#include <memory>
#include "./BiomeParent.h"
#include <functional>
#include "./IEntityRegistryOwner.h"
#include "../bedrock/level/biome/Biome.h"
#include <string>


class BiomeRegistry : IEntityRegistryOwner {

public:
    virtual void getEntityRegistry();
    virtual ~BiomeRegistry();

    void setLoadFromPacks(bool);
    BiomeRegistry();
    void _initTagRegistry();
    void getTagRegistry();
    void getTagRegistry()const;
    void registerBiome(std::string const&);
    void _allocateBiomeId(std::string const&);
    void _register(std::unique_ptr<Biome, std::default_delete<Biome>> &&);
//  void forEachBiome(std::function<void (Biome &)>)const; //TODO: incomplete function definition
    void lookupById(int)const;
    void lookupByName(std::string const&)const;
    void initServerFromPacks(ResourcePackManager &, IWorldRegistriesProvider &);
    void _buildInheritanceTree(ResourcePackManager &);
//  void _initServerFromInheritanceTree(InheritanceTree<BiomeRegistry::BiomeParent> &, IWorldRegistriesProvider &); //TODO: incomplete function definition
    void initClientFromPacks(ResourcePackManager &);
    void registrationFinished();
//  void _loadSingleBiome(ResourcePackManager &, InheritanceTree<BiomeRegistry::BiomeParent> &, std::string const&); //TODO: incomplete function definition
//  void _mergeDataInheritance(Json::Value &, InheritanceTree<BiomeRegistry::BiomeParent> &, BiomeRegistry::BiomeParent const&); //TODO: incomplete function definition
//  void _addToInheritanceTree(InheritanceTree<BiomeRegistry::BiomeParent> &, std::string const&, Json::Value &&); //TODO: incomplete function definition
};
