#pragma once

#include <string>
#include "BlockLegacy.h"
#include <vector>


class ComposterBlock : BlockLegacy {

public:
    static long PARTICLE_OFFSET;

    ~ComposterBlock(); // _ZN14ComposterBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK14ComposterBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const; // _ZNK14ComposterBlock8addAABBsERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EE
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const; // _ZNK14ComposterBlock18addCollisionShapesERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EEP5Actor
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition // _ZNK14ComposterBlock17canProvideSupportERK5Blockh16BlockSupportType
    virtual bool canContainLiquid()const; // _ZNK14ComposterBlock16canContainLiquidEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK14ComposterBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK14ComposterBlock8onRemoveER11BlockSourceRK8BlockPos
    virtual void onMove(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK14ComposterBlock6onMoveER11BlockSourceRK8BlockPosS4_
    virtual void use(Player &, BlockPos const&)const; // _ZNK14ComposterBlock3useER6PlayerRK8BlockPos
    virtual bool hasComparatorSignal()const; // _ZNK14ComposterBlock19hasComparatorSignalEv
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const; // _ZNK14ComposterBlock19getComparatorSignalER11BlockSourceRK8BlockPosRK5Blockh
    virtual void getVariant(Block const&)const; // _ZNK14ComposterBlock10getVariantERK5Block
    ComposterBlock(std::string const&, int); // _ZN14ComposterBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _emitBoneMeal(Level &, BlockSource &, BlockPos const&)const; // _ZNK14ComposterBlock13_emitBoneMealER5LevelR11BlockSourceRK8BlockPos
    void empty(BlockSource &, Block const&, BlockPos const&); // _ZN14ComposterBlock5emptyER11BlockSourceRK5BlockRK8BlockPos
//  void _notifyClientComposterUsed(Player const&, short, MinecraftEventing::POIBlockInteractionType)const; //TODO: incomplete function definition // _ZNK14ComposterBlock26_notifyClientComposterUsedERK6PlayersN17MinecraftEventing23POIBlockInteractionTypeE
    void addItem(ItemStack const&, BlockSource &, Block const&, BlockPos const&); // _ZN14ComposterBlock7addItemERK9ItemStackR11BlockSourceRK5BlockRK8BlockPos
    void _verifyIsComposter(Block const&); // _ZN14ComposterBlock18_verifyIsComposterERK5Block
    void getComposterAt(BlockSource &, BlockPos const&); // _ZN14ComposterBlock14getComposterAtER11BlockSourceRK8BlockPos
    void _getFillChance(ItemStack const&); // _ZN14ComposterBlock14_getFillChanceERK9ItemStack
    void _getCompostableItems(); // _ZN14ComposterBlock20_getCompostableItemsEv
    void extractItem(BlockSource &, Block const&, BlockPos const&); // _ZN14ComposterBlock11extractItemER11BlockSourceRK5BlockRK8BlockPos
    void addItem(Container &, int, ItemStack &, BlockSource &, Block const&, BlockPos const&); // _ZN14ComposterBlock7addItemER9ContaineriR9ItemStackR11BlockSourceRK5BlockRK8BlockPos
};
