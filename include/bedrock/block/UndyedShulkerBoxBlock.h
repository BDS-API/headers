#pragma once

#include <string>
#include "ShulkerBoxBlock.h"


class UndyedShulkerBoxBlock : ShulkerBoxBlock {

public:
    ~UndyedShulkerBoxBlock(); // _ZN21UndyedShulkerBoxBlockD2Ev
    virtual void getColor(Block const&)const; // _ZNK21UndyedShulkerBoxBlock8getColorERK5Block
    UndyedShulkerBoxBlock(std::string const&, int); // _ZN21UndyedShulkerBoxBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
