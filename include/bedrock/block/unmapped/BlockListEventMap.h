#pragma once

#include "../BlockLegacy.h"
#include <string>


class BlockListEventMap {

public:
    BlockListEventMap(BlockListEventMap &&);
    std::string getEventName()const;
    void addBlock(BlockLegacy const&);
    BlockListEventMap(BlockListEventMap const&);
    ~BlockListEventMap();
    void getBlockSet()const;
    BlockListEventMap(std::string);
};
