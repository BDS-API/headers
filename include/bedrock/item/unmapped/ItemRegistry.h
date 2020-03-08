#pragma once

#include "../../block/BlockLegacy"
#include "../Item"
#include "../../../unmapped/Block"
#include "../../pack/ResourcePackManager"


class ItemRegistry {

public:
    static long mItemRegistry;
    static long mIdToItemMap;
    static long mNameToItemMap[abi:cxx11];
    static long mItemAliasLookupMap[abi:cxx11];
    static long mMaxItemID;


    void getItem(short);
    void getItem(std::string const&);
    void getItem(Block const&);
    void getItem(BlockLegacy const&);
    void getItemCount();
    void getMaxItemID();
    void registerItem(SharedPtr<Item>);
    void unregisterItem(std::string const&);
    void lookupByName(std::string const&);
    void reassignOrCreateItem(std::string const&, short);
    void initServerData(ResourcePackManager &);
    void initClientData(ResourcePackManager &);
    void startRegistration();
    void shutdown();
    void finishedRegistration();
    void lookupByName(int &, std::string const&);
    void lookupByName(int &, int &, std::string const&);
    void registerAlias(std::string const&, std::string const&);
};
