#pragma once

#include "../BlockLegacy.h"
#include <functional>
#include <string>


namespace BlockTypeRegistry {

    static std::string mBlockLookupMap;

    void forEachBlock(std::function<bool (BlockLegacy const&)>);
    void forEachBlockDEPRECATED(std::function<bool (BlockLegacy &)>);
    void unregisterBlock(std::string const&);
    void unregisterBlocks();
    void lookupByName(std::string const&);
    void prepareBlocks(unsigned int);
};
