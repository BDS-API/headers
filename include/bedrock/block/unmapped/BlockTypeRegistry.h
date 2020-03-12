#pragma once

#include <string>
#include <functional>


namespace BlockTypeRegistry {

    static std::string mBlockLookupMap;

    void forEachBlock(std::function<bool (BlockLegacy const&)>);
    void prepareBlocks(unsigned int);
    void forEachBlockDEPRECATED(std::function<bool (BlockLegacy &)>);
    void lookupByName(std::string const&);
    void unregisterBlock(std::string const&);
    void unregisterBlocks();
};
