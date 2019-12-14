#pragma once

class BlockListEventMap {

public:

    void BlockListEventMap(std::string);
    void addBlock(BlockLegacy const&);
    void BlockListEventMap(BlockListEventMap const&);
    void BlockListEventMap(BlockListEventMap&&);
    void getBlockSet(void)const;
};
