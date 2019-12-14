#pragma once

class ScaffoldingBlockItem : BlockItem {

public:
    virtual ~ScaffoldingBlockItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void ScaffoldingBlockItem(std::string const&, int);
};
