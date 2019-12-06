#pragma once

class ItemRegistry {

public:
    static long ItemRegistry::mItemRegistry;
    static long ItemRegistry::mIdToItemMap;
    static long ItemRegistry::mMaxItemID;


    void getItem(short);
    void getItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getItem(Block const&);
    void getItem(BlockLegacy const&);
    void getItemCount(void);
    void getMaxItemID(void);
    void registerItem(SharedPtr<Item>);
    void unregisterItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void lookupByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void reassignOrCreateItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, short);
    void initServerData(ResourcePackManager &);
    void initClientData(ResourcePackManager &);
    void startRegistration(void);
    void shutdown(void);
    void finishedRegistration(void);
    void lookupByName(int &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void lookupByName(int &, int &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void registerAlias(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
