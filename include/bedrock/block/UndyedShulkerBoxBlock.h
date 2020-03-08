#pragma once

#include "../../unmapped/Block"


class UndyedShulkerBoxBlock : ShulkerBoxBlock {

public:
    virtual UndyedShulkerBoxBlock::~UndyedShulkerBoxBlock()
    virtual void getColor(Block const&)const;

    UndyedShulkerBoxBlock(std::string const&, int);
};
