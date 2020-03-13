#pragma once

#include <string>
#include <memory>
#include <functional>
#include "IEntityRegistryOwner.h"


class BiomeRegistry : IEntityRegistryOwner {

public:
    class BiomeParent;

    virtual void getEntityRegistry(); // _ZN13BiomeRegistry17getEntityRegistryEv
    ~BiomeRegistry(); // _ZN13BiomeRegistryD2Ev
    void setLoadFromPacks(bool); // _ZN13BiomeRegistry16setLoadFromPacksEb
    BiomeRegistry(); // _ZN13BiomeRegistryC2Ev
    void _initTagRegistry(); // _ZN13BiomeRegistry16_initTagRegistryEv
    void getTagRegistry(); // _ZN13BiomeRegistry14getTagRegistryEv
    void getTagRegistry()const; // _ZNK13BiomeRegistry14getTagRegistryEv
    void registerBiome(std::string const&); // _ZN13BiomeRegistry13registerBiomeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _allocateBiomeId(std::string const&); // _ZN13BiomeRegistry16_allocateBiomeIdERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _register(std::unique_ptr<Biome> &&); // _ZN13BiomeRegistry9_registerEOSt10unique_ptrI5BiomeSt14default_deleteIS1_EE
    void forEachBiome(std::function<void (Biome &)>)const; // _ZNK13BiomeRegistry12forEachBiomeESt8functionIFvR5BiomeEE
    void lookupById(int)const; // _ZNK13BiomeRegistry10lookupByIdEi
    void lookupByName(std::string const&)const; // _ZNK13BiomeRegistry12lookupByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void initServerFromPacks(ResourcePackManager &, IWorldRegistriesProvider &); // _ZN13BiomeRegistry19initServerFromPacksER19ResourcePackManagerR24IWorldRegistriesProvider
    void _buildInheritanceTree(ResourcePackManager &); // _ZN13BiomeRegistry21_buildInheritanceTreeER19ResourcePackManager
//  void _initServerFromInheritanceTree(InheritanceTree<BiomeRegistry::BiomeParent> &, IWorldRegistriesProvider &); //TODO: incomplete function definition // _ZN13BiomeRegistry30_initServerFromInheritanceTreeER15InheritanceTreeINS_11BiomeParentEER24IWorldRegistriesProvider
    void initClientFromPacks(ResourcePackManager &); // _ZN13BiomeRegistry19initClientFromPacksER19ResourcePackManager
    void registrationFinished(); // _ZN13BiomeRegistry20registrationFinishedEv
//  void _loadSingleBiome(ResourcePackManager &, InheritanceTree<BiomeRegistry::BiomeParent> &, std::string const&); //TODO: incomplete function definition // _ZN13BiomeRegistry16_loadSingleBiomeER19ResourcePackManagerR15InheritanceTreeINS_11BiomeParentEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void _mergeDataInheritance(Json::Value &, InheritanceTree<BiomeRegistry::BiomeParent> &, BiomeRegistry::BiomeParent const&); //TODO: incomplete function definition // _ZN13BiomeRegistry21_mergeDataInheritanceERN4Json5ValueER15InheritanceTreeINS_11BiomeParentEERKS4_
//  void _addToInheritanceTree(InheritanceTree<BiomeRegistry::BiomeParent> &, std::string const&, Json::Value &&); //TODO: incomplete function definition // _ZN13BiomeRegistry21_addToInheritanceTreeER15InheritanceTreeINS_11BiomeParentEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEON4Json5ValueE
    class BiomeParent {

    public:
        ~BiomeParent(); // _ZN13BiomeRegistry11BiomeParentD2Ev
        BiomeParent(); // _ZN13BiomeRegistry11BiomeParentC2Ev
    };
};
