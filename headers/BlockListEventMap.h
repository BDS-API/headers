#pragma once

class BlockListEventMap {

public:

    void BlockListEventMap(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void addBlock(BlockLegacy const&);
    void BlockListEventMap(BlockListEventMap const&);
    void BlockListEventMap(BlockListEventMap&&);
    void getBlockSet(void)const;
};
