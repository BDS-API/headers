#pragma once

#include <memory>
#include <string>
#include "IEntityRegistryOwner.h"
#include <functional>


class BiomeRegistry : IEntityRegistryOwner {

public:
    class BiomeParent;

    virtual void getEntityRegistry();
    ~BiomeRegistry();
    void lookupById(int)const;
    void getTagRegistry()const;
    void initClientFromPacks(ResourcePackManager &);
    void setLoadFromPacks(bool);
    void getTagRegistry();
    void registerBiome(std::string const&);
//  void _initServerFromInheritanceTree(InheritanceTree<BiomeRegistry::BiomeParent> &, IWorldRegistriesProvider &); //TODO: incomplete function definition
    void registrationFinished();
//  void _loadSingleBiome(ResourcePackManager &, InheritanceTree<BiomeRegistry::BiomeParent> &, std::string const&); //TODO: incomplete function definition
//  void _addToInheritanceTree(InheritanceTree<BiomeRegistry::BiomeParent> &, std::string const&, Json::Value &&); //TODO: incomplete function definition
    void _buildInheritanceTree(ResourcePackManager &);
    void _initTagRegistry();
    void _allocateBiomeId(std::string const&);
    void initServerFromPacks(ResourcePackManager &, IWorldRegistriesProvider &);
    void forEachBiome(std::function<void (Biome &)>)const;
    void lookupByName(std::string const&)const;
    BiomeRegistry();
    void _register(std::unique_ptr<Biome> &&);
//  void _mergeDataInheritance(Json::Value &, InheritanceTree<BiomeRegistry::BiomeParent> &, BiomeRegistry::BiomeParent const&); //TODO: incomplete function definition
    class BiomeParent {

    public:
        ~BiomeParent();
        BiomeParent();
    };
};
