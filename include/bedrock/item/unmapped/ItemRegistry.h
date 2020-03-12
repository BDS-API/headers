#pragma once

#include "../../pack/ResourcePackManager.h"
#include "../../../unmapped/Block.h"
#include <string>
#include "../Item.h"
#include "../../block/BlockLegacy.h"


namespace ItemRegistry {

    static long mItemRegistry;
    static long mIdToItemMap;
    static std::string mNameToItemMap;
    static std::string mItemAliasLookupMap;
    static long mMaxItemID;

    void startRegistration();
    void registerAlias(std::string const&, std::string const&);
    void reassignOrCreateItem(std::string const&, short);
    void lookupByName(std::string const&);
    void lookupByName(int &, std::string const&);
    void unregisterItem(std::string const&);
    void initClientData(ResourcePackManager &);
    void getItem(short);
    void getMaxItemID();
    std::string getNameToItemMap();
//  void registerItem(SharedPtr<Item>); //TODO: incomplete function definition
    void finishedRegistration();
    void getItem(std::string const&);
    void getItem(BlockLegacy const&);
    void getItem(Block const&);
    void initServerData(ResourcePackManager &);
    void getItemCount();
    void shutdown();
    void lookupByName(int &, int &, std::string const&);
};
