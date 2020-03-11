#pragma once

#include <functional>
#include "../BlockLegacy.h"
#include <string>


class BlockTypeRegistry {

public:
    static std::string mBlockLookupMap;


    void unregisterBlock(std::string const&);
    void prepareBlocks(unsigned int);
    void unregisterBlocks();
    void forEachBlock(std::function<bool (BlockLegacy const&)>);
    void forEachBlockDEPRECATED(std::function<bool (BlockLegacy &)>);
    void lookupByName(std::string const&);
};
