#pragma once

#include "ShulkerBoxBlock.h"
#include <string>


class UndyedShulkerBoxBlock : public ShulkerBoxBlock {

public:
    virtual ~UndyedShulkerBoxBlock(); // _ZN21UndyedShulkerBoxBlockD2Ev
    virtual void __fake_function0(); // fake
    virtual void getColor(Block const&)const; // _ZNK21UndyedShulkerBoxBlock8getColorERK5Block
    UndyedShulkerBoxBlock(std::string const&, int); // _ZN21UndyedShulkerBoxBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
