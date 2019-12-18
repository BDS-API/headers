#pragma once

class ItemRegistry {

public:
    static long ItemRegistry::mItemRegistry;
    static long ItemRegistry::mIdToItemMap;
    static long ItemRegistry::mNameToItemMap[abi:cxx11];
    static long ItemRegistry::mItemAliasLookupMap[abi:cxx11];
    static long ItemRegistry::mMaxItemID;


    void getItem(short);
    void getItem(std::string const&);
    void getItem(Block const&);
    void getItem(BlockLegacy const&);
    void getItemCount(void);
    void getMaxItemID(void);
    void registerItem(SharedPtr<Item>);
    void unregisterItem(std::string const&);
    void lookupByName(std::string const&);
    void reassignOrCreateItem(std::string const&, short);
    void initServerData(ResourcePackManager &);
    void initClientData(ResourcePackManager &);
    void startRegistration(void);
    void shutdown(void);
    void finishedRegistration(void);
    void lookupByName(int &, std::string const&);
    void lookupByName(int &, int &, std::string const&);
    void registerAlias(std::string const&, std::string const&);
};
