#pragma once

#include <string>
#include "./BlockActor.h"
#include "../../nbt/CompoundTag.h"
#include <memory>
#include "../../level/Level.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../util/BlockPos.h"
#include "../../item/ItemInstance.h"
#include "../../item/ItemStack.h"
#include "../unmapped/BlockSource.h"
#include "../../actor/Player.h"


class BannerBlockActor : BlockActor {

public:
    static long MAX_PATTERNS;
    static std::string TAG_BASE_COLOR;
    static std::string TAG_PATTERNS;
    static std::string TAG_PATTERN;
    static std::string TAG_COLOR;
    static std::string TAG_TYPE;

    virtual ~BannerBlockActor();
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
    std::string getPatterns(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&);
    std::string getColors(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&);
//  void setBannerDetails(ItemStack &, int, std::string const&, std::string const&, BannerBlockType); //TODO: incomplete function definition
};
