#pragma once

#include <string>


class BlockListEventMap {

public:
    ~BlockListEventMap(); // _ZN17BlockListEventMapD2Ev
    BlockListEventMap(std::string); // _ZN17BlockListEventMapC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void addBlock(BlockLegacy const&); // _ZN17BlockListEventMap8addBlockERK11BlockLegacy
    BlockListEventMap(BlockListEventMap const&); // _ZN17BlockListEventMapC2ERKS_
    BlockListEventMap(BlockListEventMap &&); // _ZN17BlockListEventMapC2EOS_
    void getBlockSet()const; // _ZNK17BlockListEventMap11getBlockSetEv
    std::string getEventName()const; // _ZNK17BlockListEventMap12getEventNameB5cxx11Ev
};
