#pragma once

#include "../block/unmapped/BlockSource.h"
#include <string>
#include "./ItemStackBase.h"
#include <memory>
#include "../nbt/CompoundTag.h"
#include "../util/BlockPos.h"
#include "./Item.h"
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "./ItemStack.h"
#include "../container/Container.h"
#include "unmapped/ItemDescriptor.h"


class SkullItem : Item {

public:
    virtual ~SkullItem();
    virtual void getBlockShape()const;
    virtual void getLevelDataForAuxValue(int)const;
    virtual bool isValidAuxValue(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual std::string getAuxValuesDescription()const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    SkullItem(std::string const&, int);
    void _canDispense(BlockSource &, Vec3 const&, unsigned char)const;
};
