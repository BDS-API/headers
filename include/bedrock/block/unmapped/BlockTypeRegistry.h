#pragma once



class BlockTypeRegistry {

public:
    static long mBlockLookupMap[abi:cxx11];


    void unregisterBlock(std::string const&);
    void prepareBlocks(unsigned int);
    void unregisterBlocks();
    void forEachBlock(std::function<bool ()(BlockLegacy const&)>);
    void forEachBlockDEPRECATED(std::function<bool ()(BlockLegacy &)>);
    void lookupByName(std::string const&);
};
