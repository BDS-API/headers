#pragma once

#include "../bedrock/level/biome/Biome"
#include "../json/Value"
#include "../bedrock/pack/ResourcePackManager"


class BiomeRegistry : IEntityRegistryOwner {

public:
    virtual void getEntityRegistry();
    virtual BiomeRegistry::~BiomeRegistry()

    void setLoadFromPacks(bool);
    BiomeRegistry(void);
    void _initTagRegistry();
    void getTagRegistry();
    void getTagRegistry()const;
    void registerBiome(std::string const&);
    void _allocateBiomeId(std::string const&);
    void _register(std::unique_ptr<Biome, std::default_delete<Biome>> &&);
    void forEachBiome(std::function<void ()(Biome &)>)const;
    void lookupById(int)const;
    void lookupByName(std::string const&)const;
    void initServerFromPacks(ResourcePackManager &, IWorldRegistriesProvider &);
    void _buildInheritanceTree(ResourcePackManager &);
    void _initServerFromInheritanceTree(InheritanceTree<BiomeRegistry::BiomeParent> &, IWorldRegistriesProvider &);
    void initClientFromPacks(ResourcePackManager &);
    void registrationFinished();
    void _loadSingleBiome(ResourcePackManager &, InheritanceTree<BiomeRegistry::BiomeParent> &, std::string const&);
    void _mergeDataInheritance(Json::Value &, InheritanceTree<BiomeRegistry::BiomeParent> &, BiomeRegistry::BiomeParent const&);
    void _addToInheritanceTree(InheritanceTree<BiomeRegistry::BiomeParent> &, std::string const&, Json::Value &&);
};
