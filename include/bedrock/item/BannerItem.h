#pragma once

#include "../util/BlockPos.h"
#include "ItemStack.h"
#include <string>
#include "../actor/Actor.h"
#include "../nbt/CompoundTag.h"
#include <vector>
#include "ItemStackBase.h"
#include <memory>
#include "Item.h"
#include "../level/Level.h"
#include "unmapped/ItemDescriptor.h"


class BannerItem : Item {

public:
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    ~BannerItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual bool isValidAuxValue(int)const;
    virtual bool isWearableThroughLootTable(std::unique_ptr<CompoundTag> const&)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    void appendHoverTextFromBannerEntityTag(ItemStack const&, std::vector<std::string> &);
    BannerItem(std::string const&, int);
};
