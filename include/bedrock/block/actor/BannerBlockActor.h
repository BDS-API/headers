#pragma once

#include <memory>
#include <string>
#include "BlockActor.h"


class BannerBlockActor : BlockActor {

public:
    static long MAX_PATTERNS;
    static std::string TAG_BASE_COLOR;
    static std::string TAG_PATTERNS;
    static std::string TAG_PATTERN;
    static std::string TAG_COLOR;
    static std::string TAG_TYPE;

    virtual void save(CompoundTag &)const;
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void tick(BlockSource &);
    ~BannerBlockActor();
    virtual void onPlace(BlockSource &);
    void getPatternCount(std::unique_ptr<CompoundTag> const&);
    void getType(std::unique_ptr<CompoundTag> const&);
    void getType()const;
    void getBaseColor()const;
    void removeLastPattern(ItemStack &, Player &);
    void getPatternCount()const;
    void getPattern(int)const;
    std::string getPatterns(std::unique_ptr<CompoundTag> const&);
    BannerBlockActor(BlockPos const&);
    void getColor(int)const;
//  void setBannerDetails(ItemStack &, int, std::string const&, std::string const&, BannerBlockType); //TODO: incomplete function definition
    void getBaseColor(ItemStack const&);
    void setItemValues(ItemStack const&);
    std::string getColors(std::unique_ptr<CompoundTag> const&);
    bool isDefaultBanner(ItemInstance const&);
    void getBaseColorInt()const;
};
