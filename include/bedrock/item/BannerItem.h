#pragma once

#include <vector>
#include <memory>
#include "../util/BlockPos.h"
#include <string>
#include "Item.h"


class BannerItem : Item {

public:
    ~BannerItem(); // _ZN10BannerItemD2Ev
    virtual bool isWearableThroughLootTable(std::unique_ptr<CompoundTag> const&)const; // _ZNK10BannerItem26isWearableThroughLootTableERKSt10unique_ptrI11CompoundTagSt14default_deleteIS1_EE
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const; // _ZNK10BannerItem24appendFormattedHovertextERK13ItemStackBaseR5LevelRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual bool isValidAuxValue(int)const; // _ZNK10BannerItem15isValidAuxValueEi
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK10BannerItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK10BannerItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    BannerItem(std::string const&, int); // _ZN10BannerItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void appendHoverTextFromBannerEntityTag(ItemStack const&, std::vector<std::string> &); // _ZN10BannerItem34appendHoverTextFromBannerEntityTagERK9ItemStackRSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS9_EE
};
