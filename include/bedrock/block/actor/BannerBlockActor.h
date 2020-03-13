#pragma once

#include <string>
#include "BlockActor.h"
#include <memory>


class BannerBlockActor : BlockActor {

public:
    static long MAX_PATTERNS;
    static std::string TAG_BASE_COLOR;
    static std::string TAG_PATTERNS;
    static std::string TAG_PATTERN;
    static std::string TAG_COLOR;
    static std::string TAG_TYPE;

    ~BannerBlockActor(); // _ZN16BannerBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN16BannerBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK16BannerBlockActor4saveER11CompoundTag
    virtual void tick(BlockSource &); // _ZN16BannerBlockActor4tickER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN16BannerBlockActor15getUpdatePacketER11BlockSource
    virtual void onPlace(BlockSource &); // _ZN16BannerBlockActor7onPlaceER11BlockSource
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN16BannerBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    BannerBlockActor(BlockPos const&); // _ZN16BannerBlockActorC2ERK8BlockPos
    void setItemValues(ItemStack const&); // _ZN16BannerBlockActor13setItemValuesERK9ItemStack
    void getBaseColor(ItemStack const&); // _ZN16BannerBlockActor12getBaseColorERK9ItemStack
    void getBaseColor()const; // _ZNK16BannerBlockActor12getBaseColorEv
    void getBaseColorInt()const; // _ZNK16BannerBlockActor15getBaseColorIntEv
    void getType()const; // _ZNK16BannerBlockActor7getTypeEv
    void getPatternCount(std::unique_ptr<CompoundTag> const&); // _ZN16BannerBlockActor15getPatternCountERKSt10unique_ptrI11CompoundTagSt14default_deleteIS1_EE
    void getPatternCount()const; // _ZNK16BannerBlockActor15getPatternCountEv
    void getPattern(int)const; // _ZNK16BannerBlockActor10getPatternEi
    void getColor(int)const; // _ZNK16BannerBlockActor8getColorEi
    bool isDefaultBanner(ItemInstance const&); // _ZN16BannerBlockActor15isDefaultBannerERK12ItemInstance
    void getType(std::unique_ptr<CompoundTag> const&); // _ZN16BannerBlockActor7getTypeERKSt10unique_ptrI11CompoundTagSt14default_deleteIS1_EE
    void removeLastPattern(ItemStack &, Player &); // _ZN16BannerBlockActor17removeLastPatternER9ItemStackR6Player
    std::string getPatterns(std::unique_ptr<CompoundTag> const&); // _ZN16BannerBlockActor11getPatternsB5cxx11ERKSt10unique_ptrI11CompoundTagSt14default_deleteIS1_EE
    std::string getColors(std::unique_ptr<CompoundTag> const&); // _ZN16BannerBlockActor9getColorsB5cxx11ERKSt10unique_ptrI11CompoundTagSt14default_deleteIS1_EE
//  void setBannerDetails(ItemStack &, int, std::string const&, std::string const&, BannerBlockType); //TODO: incomplete function definition // _ZN16BannerBlockActor16setBannerDetailsER9ItemStackiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES9_15BannerBlockType
};
