#pragma once

#include "../bedrock/block/BlockLegacy"


class BlockListEventMap {

public:

    BlockListEventMap(std::string);
    void addBlock(BlockLegacy const&);
    BlockListEventMap(BlockListEventMap const&);
    BlockListEventMap(BlockListEventMap&&);
    void getBlockSet(void)const;
};
