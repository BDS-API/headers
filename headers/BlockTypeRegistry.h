#pragma once

class BlockTypeRegistry {

public:

    void unregisterBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void prepareBlocks(unsigned int);
    void unregisterBlocks(void);
    void forEachBlock(std::function<bool ()(BlockLegacy const&)>);
    void forEachBlockDEPRECATED(std::function<bool ()(BlockLegacy &)>);
    void lookupByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
