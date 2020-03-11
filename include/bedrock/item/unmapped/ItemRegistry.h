#pragma once

#include "../../../unmapped/Block.h"
#include "../../pack/ResourcePackManager.h"
#include "../Item.h"
#include "../../block/BlockLegacy.h"
#include <string>


class ItemRegistry {

public:
    static long mItemRegistry;
    static long mIdToItemMap;
    static std::string mNameToItemMap;
    static std::string mItemAliasLookupMap;
    static long mMaxItemID;


    void getItem(short);
    void getItem(std::string const&);
    void getItem(Block const&);
    void getItem(BlockLegacy const&);
    std::string getNameToItemMap();
    void getItemCount();
    void getMaxItemID();
//  void registerItem(SharedPtr<Item>); //TODO: incomplete function definition
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
