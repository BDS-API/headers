#pragma once

#include "./BlockItem.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "./ItemStack.h"
#include <string>


class CoralFanBlockItem : BlockItem {

public:
    virtual ~CoralFanBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual bool isValidAuxValue(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    CoralFanBlockItem(std::string const&, int);
};
