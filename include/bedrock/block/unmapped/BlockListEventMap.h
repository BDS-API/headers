#pragma once

#include <string>


class BlockListEventMap {

public:
    void addBlock(BlockLegacy const&);
    BlockListEventMap(BlockListEventMap const&);
    ~BlockListEventMap();
    BlockListEventMap(BlockListEventMap &&);
    std::string getEventName()const;
    void getBlockSet()const;
    BlockListEventMap(std::string);
};
