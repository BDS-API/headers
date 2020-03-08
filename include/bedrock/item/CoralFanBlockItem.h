#pragma once

#include "../actor/Actor"
#include "../util/BlockPos"


class CoralFanBlockItem : BlockItem {

public:
    virtual CoralFanBlockItem::~CoralFanBlockItem()
    virtual void getLevelDataForAuxValue(int)const;
    virtual bool isValidAuxValue(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    CoralFanBlockItem(std::string const&, int);
};
