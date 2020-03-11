#pragma once

#include "./BlockItem.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "./ItemStack.h"
#include <string>


class BambooBlockItem : BlockItem {

public:
    virtual ~BambooBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    BambooBlockItem(std::string const&, int);
};
