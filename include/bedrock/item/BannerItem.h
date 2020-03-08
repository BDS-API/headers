#pragma once

#include "../level/Level"
#include "unmapped/ItemDescriptor"
#include "../actor/Actor"
#include "../util/BlockPos"
#include "../nbt/CompoundTag"


class BannerItem : Item {

public:
    BannerItem::~BannerItem()
    virtual bool isWearableThroughLootTable(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool isValidAuxValue(int)const;
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    BannerItem(std::string const&, int);
    void appendHoverTextFromBannerEntityTag(ItemStack const&, std::vector<std::string, std::allocator<std::string>> &);
};
