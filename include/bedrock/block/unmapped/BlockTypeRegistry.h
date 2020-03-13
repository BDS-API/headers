#pragma once

#include <string>
#include <functional>


namespace BlockTypeRegistry {

    static std::string mBlockLookupMap;

    void unregisterBlock(std::string const&); // _ZN17BlockTypeRegistry15unregisterBlockERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void prepareBlocks(unsigned int); // _ZN17BlockTypeRegistry13prepareBlocksEj
    void unregisterBlocks(); // _ZN17BlockTypeRegistry16unregisterBlocksEv
    void forEachBlock(std::function<bool (BlockLegacy const&)>); // _ZN17BlockTypeRegistry12forEachBlockESt8functionIFbRK11BlockLegacyEE
    void forEachBlockDEPRECATED(std::function<bool (BlockLegacy &)>); // _ZN17BlockTypeRegistry22forEachBlockDEPRECATEDESt8functionIFbR11BlockLegacyEE
    void lookupByName(std::string const&); // _ZN17BlockTypeRegistry12lookupByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
