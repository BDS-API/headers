#pragma once

#include "BlockActor.h"
#include "../../item/ItemStack.h"
#include <string>
#include "../../item/ItemInstance.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include <memory>
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class BannerBlockActor : BlockActor {

public:
    static long MAX_PATTERNS;
    static std::string TAG_BASE_COLOR;
    static std::string TAG_PATTERNS;
    static std::string TAG_PATTERN;
    static std::string TAG_COLOR;
    static std::string TAG_TYPE;

    virtual void getUpdatePacket(BlockSource &);
    virtual void save(CompoundTag &)const;
    virtual void onPlace(BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    ~BannerBlockActor();
    virtual void tick(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
//  void setBannerDetails(ItemStack &, int, std::string const&, std::string const&, BannerBlockType); //TODO: incomplete function definition
    BannerBlockActor(BlockPos const&);
    void getBaseColor(ItemStack const&);
    void getPattern(int)const;
    void getPatternCount()const;
    void getPatternCount(std::unique_ptr<CompoundTag> const&);
    void getColor(int)const;
    void getBaseColor()const;
    void getType()const;
    std::string getColors(std::unique_ptr<CompoundTag> const&);
    void getType(std::unique_ptr<CompoundTag> const&);
    void getBaseColorInt()const;
    void setItemValues(ItemStack const&);
    void removeLastPattern(ItemStack &, Player &);
    std::string getPatterns(std::unique_ptr<CompoundTag> const&);
    bool isDefaultBanner(ItemInstance const&);
};
