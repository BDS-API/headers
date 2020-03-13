#pragma once

#include <string>


namespace ItemRegistry {

    static long mItemRegistry;
    static long mIdToItemMap;
    static std::string mNameToItemMap;
    static std::string mItemAliasLookupMap;
    static long mMaxItemID;

    void getItem(short); // _ZN12ItemRegistry7getItemEs
    void getItem(std::string const&); // _ZN12ItemRegistry7getItemERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getItem(Block const&); // _ZN12ItemRegistry7getItemERK5Block
    void getItem(BlockLegacy const&); // _ZN12ItemRegistry7getItemERK11BlockLegacy
    std::string getNameToItemMap(); // _ZN12ItemRegistry16getNameToItemMapB5cxx11Ev
    void getItemCount(); // _ZN12ItemRegistry12getItemCountEv
    void getMaxItemID(); // _ZN12ItemRegistry12getMaxItemIDEv
//  void registerItem(SharedPtr<Item>); //TODO: incomplete function definition // _ZN12ItemRegistry12registerItemE9SharedPtrI4ItemE
    void unregisterItem(std::string const&); // _ZN12ItemRegistry14unregisterItemERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void lookupByName(std::string const&); // _ZN12ItemRegistry12lookupByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void reassignOrCreateItem(std::string const&, short); // _ZN12ItemRegistry20reassignOrCreateItemERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEs
    void initServerData(ResourcePackManager &); // _ZN12ItemRegistry14initServerDataER19ResourcePackManager
    void initClientData(ResourcePackManager &); // _ZN12ItemRegistry14initClientDataER19ResourcePackManager
    void startRegistration(); // _ZN12ItemRegistry17startRegistrationEv
    void shutdown(); // _ZN12ItemRegistry8shutdownEv
    void finishedRegistration(); // _ZN12ItemRegistry20finishedRegistrationEv
    void lookupByName(int &, std::string const&); // _ZN12ItemRegistry12lookupByNameERiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void lookupByName(int &, int &, std::string const&); // _ZN12ItemRegistry12lookupByNameERiS0_RKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void registerAlias(std::string const&, std::string const&); // _ZN12ItemRegistry13registerAliasERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
};
