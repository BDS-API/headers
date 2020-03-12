#pragma once

#include "IWorldRegistriesProvider.h"
#include <string>
#include "IEntityRegistryOwner.h"
#include "../json/Value.h"
#include "../bedrock/pack/ResourcePackManager.h"
#include <functional>
#include <memory>
#include "../bedrock/level/biome/Biome.h"


class BiomeRegistry : IEntityRegistryOwner {

public:
    class BiomeParent;

    ~BiomeRegistry();
    virtual void getEntityRegistry();
//  void _loadSingleBiome(ResourcePackManager &, InheritanceTree<BiomeRegistry::BiomeParent> &, std::string const&); //TODO: incomplete function definition
    void _register(std::unique_ptr<Biome> &&);
//  void _addToInheritanceTree(InheritanceTree<BiomeRegistry::BiomeParent> &, std::string const&, Json::Value &&); //TODO: incomplete function definition
    void forEachBiome(std::function<void (Biome &)>)const;
    void initClientFromPacks(ResourcePackManager &);
    void lookupById(int)const;
    void setLoadFromPacks(bool);
    BiomeRegistry();
    void registrationFinished();
    void registerBiome(std::string const&);
//  void _mergeDataInheritance(Json::Value &, InheritanceTree<BiomeRegistry::BiomeParent> &, BiomeRegistry::BiomeParent const&); //TODO: incomplete function definition
    void _allocateBiomeId(std::string const&);
    void getTagRegistry()const;
    void lookupByName(std::string const&)const;
    void _initTagRegistry();
//  void _initServerFromInheritanceTree(InheritanceTree<BiomeRegistry::BiomeParent> &, IWorldRegistriesProvider &); //TODO: incomplete function definition
    void _buildInheritanceTree(ResourcePackManager &);
    void initServerFromPacks(ResourcePackManager &, IWorldRegistriesProvider &);
    void getTagRegistry();
    class BiomeParent {

    public:
        BiomeParent();
        ~BiomeParent();
    };
};
