#pragma once

class BiomeRegistry : IEntityRegistryOwner {

public:
    virtual void getEntityRegistry(void);
    virtual ~BiomeRegistry();

    void setLoadFromPacks(bool);
    void BiomeRegistry(void);
    void _initTagRegistry(void);
    void getTagRegistry(void);
    void getTagRegistry(void)const;
    void registerBiome(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _allocateBiomeId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _register(std::unique_ptr<Biome, std::default_delete<Biome>> &&);
    void forEachBiome(std::function<void ()(Biome &)>)const;
    void lookupById(int)const;
    void lookupByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void initServerFromPacks(ResourcePackManager &, IWorldRegistriesProvider &);
    void _buildInheritanceTree(ResourcePackManager &);
    void _initServerFromInheritanceTree(InheritanceTree<BiomeRegistry::BiomeParent> &, IWorldRegistriesProvider &);
    void initClientFromPacks(ResourcePackManager &);
    void registrationFinished(void);
    void _loadSingleBiome(ResourcePackManager &, InheritanceTree<BiomeRegistry::BiomeParent> &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _mergeDataInheritance(Json::Value &, InheritanceTree<BiomeRegistry::BiomeParent> &, BiomeRegistry::BiomeParent const&);
    void _addToInheritanceTree(InheritanceTree<BiomeRegistry::BiomeParent> &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value &&);
};
