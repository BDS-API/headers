#pragma once

#include "./BlockListEventMap.h"
#include "../BlockLegacy.h"
#include <string>


class BlockListEventMap {

public:

    ~BlockListEventMap();
    BlockListEventMap(std::string);
    void addBlock(BlockLegacy const&);
    BlockListEventMap(BlockListEventMap const&);
    BlockListEventMap(BlockListEventMap &&);
    void getBlockSet()const;
    std::string getEventName()const;
};
