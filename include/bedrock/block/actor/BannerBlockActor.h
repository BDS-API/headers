#pragma once

#include "../../../unmapped/BlockPos"
#include "../../level/Level"
#include "../../../unmapped/BlockSource"
#include "../../item/ItemInstance"
#include "../../item/ItemStack"
#include "../../nbt/CompoundTag"


class BannerBlockActor : BlockActor {

public:
    static long MAX_PATTERNS;
    static long TAG_BASE_COLOR[abi:cxx11];
    static long TAG_PATTERNS[abi:cxx11];
    static long TAG_PATTERN[abi:cxx11];
    static long TAG_COLOR[abi:cxx11];
    static long TAG_TYPE[abi:cxx11];

    virtual BannerBlockActor::~BannerBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    BannerBlockActor(BlockPos const&);
    void setItemValues(ItemStack const&);
    void getBaseColor(ItemStack const&);
    void getBaseColor(void)const;
    void getBaseColorInt(void)const;
    void getType(void)const;
    void getPatternCount(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&);
    void getPatternCount(void)const;
    void getPattern(int)const;
    void getColor(int)const;
    bool isDefaultBanner(ItemInstance const&);
    void getType(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&);
    void removeLastPattern(ItemStack &, Player &);
    void setBannerDetails(ItemStack &, int, std::string const&, std::string const&, BannerBlockType);
};
