#pragma once

#include <string>
#include "./ItemStackBase.h"
#include <memory>
#include "../util/BlockPos.h"
#include "./Item.h"
#include "../level/Level.h"
#include "../actor/Actor.h"
#include <vector>
#include "../nbt/CompoundTag.h"
#include "./ItemStack.h"
#include "unmapped/ItemDescriptor.h"


class BannerItem : Item {

public:
    virtual ~BannerItem();
    virtual bool isWearableThroughLootTable(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool isValidAuxValue(int)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    BannerItem(std::string const&, int);
    void appendHoverTextFromBannerEntityTag(ItemStack const&, std::vector<std::string, std::allocator<std::string>> &);
};
