#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "BlockItem.h"


class CoralFanBlockItem : BlockItem {

public:
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual bool isValidAuxValue(int)const;
    virtual void getLevelDataForAuxValue(int)const;
    ~CoralFanBlockItem();
    CoralFanBlockItem(std::string const&, int);
};
