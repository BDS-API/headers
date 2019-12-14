#pragma once

class UndyedShulkerBoxBlock : ShulkerBoxBlock {

public:
    virtual ~UndyedShulkerBoxBlock();
    virtual void getColor(Block const&)const;

    void UndyedShulkerBoxBlock(std::string const&, int);
};
