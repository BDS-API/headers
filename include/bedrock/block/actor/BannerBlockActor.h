#pragma once

#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../item/ItemInstance"
#include "../../item/ItemStack"
#include "../../actor/Player"
#include "../../../unmapped/DataLoadHelper"


class BannerBlockActor : BlockActor {

public:
    static long MAX_PATTERNS;
    static long TAG_BASE_COLOR[abi:cxx11];
    static long TAG_PATTERNS[abi:cxx11];
    static long TAG_PATTERN[abi:cxx11];
    static long TAG_COLOR[abi:cxx11];
    static long TAG_TYPE[abi:cxx11];

    virtual BannerBlockActor::~BannerBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    BannerBlockActor(BlockPos const&);
    void setItemValues(ItemStack const&);
    void getBaseColor(ItemStack const&);
    void getBaseColor()const;
    void getBaseColorInt()const;
    void getType()const;
    void getPatternCount(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&);
    void getPatternCount()const;
    void getPattern(int)const;
    void getColor(int)const;
    bool isDefaultBanner(ItemInstance const&);
    void getType(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&);
    void removeLastPattern(ItemStack &, Player &);
    void setBannerDetails(ItemStack &, int, std::string const&, std::string const&, BannerBlockType);
};
