#pragma once

class BannerItem : Item {

public:
    virtual ~BannerItem();
    virtual bool isWearableThroughLootTable(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool isValidAuxValue(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void BannerItem(std::string const&, int);
    void appendHoverTextFromBannerEntityTag(ItemStack const&, std::vector<std::string, std::allocator<std::string>> &);
};
