#pragma once

class UndyedShulkerBoxBlock : ShulkerBoxBlock {

public:
    virtual UndyedShulkerBoxBlock::~UndyedShulkerBoxBlock();
    virtual void getColor(Block const&)const;

    UndyedShulkerBoxBlock(std::string const&, int);
};
