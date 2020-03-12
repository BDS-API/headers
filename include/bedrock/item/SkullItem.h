#pragma once

#include "../util/BlockPos.h"
#include "ItemStack.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../nbt/CompoundTag.h"
#include "../container/Container.h"
#include <memory>
#include "Item.h"
#include "ItemStackBase.h"
#include "../block/unmapped/BlockSource.h"
#include "unmapped/ItemDescriptor.h"


class SkullItem : Item {

public:
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void getLevelDataForAuxValue(int)const;
    virtual std::string getAuxValuesDescription()const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void getBlockShape()const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    ~SkullItem();
    virtual bool isValidAuxValue(int)const;
    SkullItem(std::string const&, int);
    void _canDispense(BlockSource &, Vec3 const&, unsigned char)const;
};
