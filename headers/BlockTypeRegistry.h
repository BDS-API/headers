#pragma once

class BlockTypeRegistry {

public:

    void unregisterBlock(std::string const&);
    void prepareBlocks(unsigned int);
    void unregisterBlocks(void);
    void forEachBlock(std::function<bool ()(BlockLegacy const&)>);
    void forEachBlockDEPRECATED(std::function<bool ()(BlockLegacy &)>);
    void lookupByName(std::string const&);
};
