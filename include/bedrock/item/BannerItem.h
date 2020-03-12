#pragma once

#include <memory>
#include <vector>
#include <string>
#include "Item.h"
#include "../util/BlockPos.h"


class BannerItem : Item {

public:
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    ~BannerItem();
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool isWearableThroughLootTable(std::unique_ptr<CompoundTag> const&)const;
    virtual bool isValidAuxValue(int)const;
    void appendHoverTextFromBannerEntityTag(ItemStack const&, std::vector<std::string> &);
    BannerItem(std::string const&, int);
};
