#pragma once

#include <string>


namespace ItemRegistry {

    static long mItemRegistry;
    static long mIdToItemMap;
    static std::string mNameToItemMap;
    static std::string mItemAliasLookupMap;
    static long mMaxItemID;

    void getItem(short);
//  void registerItem(SharedPtr<Item>); //TODO: incomplete function definition
    void shutdown();
    void lookupByName(int &, std::string const&);
    void getMaxItemID();
    void initClientData(ResourcePackManager &);
    void initServerData(ResourcePackManager &);
    void getItemCount();
    void getItem(BlockLegacy const&);
    void lookupByName(std::string const&);
    void startRegistration();
    void registerAlias(std::string const&, std::string const&);
    std::string getNameToItemMap();
    void getItem(std::string const&);
    void lookupByName(int &, int &, std::string const&);
    void unregisterItem(std::string const&);
    void reassignOrCreateItem(std::string const&, short);
    void finishedRegistration();
    void getItem(Block const&);
};
