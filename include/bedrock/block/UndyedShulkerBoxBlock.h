#pragma once

#include "../../unmapped/Block.h"
#include "./ShulkerBoxBlock.h"
#include <string>


class UndyedShulkerBoxBlock : ShulkerBoxBlock {

public:
    virtual ~UndyedShulkerBoxBlock();
    virtual void getColor(Block const&)const;

    UndyedShulkerBoxBlock(std::string const&, int);
};
