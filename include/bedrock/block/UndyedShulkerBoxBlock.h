#pragma once

#include "ShulkerBoxBlock.h"
#include "../../unmapped/Block.h"
#include <string>


class UndyedShulkerBoxBlock : ShulkerBoxBlock {

public:
    ~UndyedShulkerBoxBlock();
    virtual void getColor(Block const&)const;
    UndyedShulkerBoxBlock(std::string const&, int);
};
