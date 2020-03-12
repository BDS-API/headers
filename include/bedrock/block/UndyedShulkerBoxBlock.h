#pragma once

#include <string>
#include "ShulkerBoxBlock.h"


class UndyedShulkerBoxBlock : ShulkerBoxBlock {

public:
    virtual void getColor(Block const&)const;
    ~UndyedShulkerBoxBlock();
    UndyedShulkerBoxBlock(std::string const&, int);
};
