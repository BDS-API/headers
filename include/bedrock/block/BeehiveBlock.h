#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "ActorBlock.h"


class BeehiveBlock : ActorBlock {

public:
    ~BeehiveBlock(); // _ZN12BeehiveBlockD2Ev
    virtual void getNextBlockPermutation(Block const&)const; // _ZNK12BeehiveBlock23getNextBlockPermutationERK5Block
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK12BeehiveBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK12BeehiveBlock17playerWillDestroyER6PlayerRK8BlockPosRK5Block
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK12BeehiveBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK12BeehiveBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK12BeehiveBlock3useER6PlayerRK8BlockPos
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK12BeehiveBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void executeEvent(BlockSource &, BlockPos const&, Block const&, std::string const&, Actor &)const; // _ZNK12BeehiveBlock12executeEventER11BlockSourceRK8BlockPosRK5BlockRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER5Actor
    virtual bool hasComparatorSignal()const; // _ZNK12BeehiveBlock19hasComparatorSignalEv
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const; // _ZNK12BeehiveBlock19getComparatorSignalER11BlockSourceRK8BlockPosRK5Blockh
    virtual void getVariant(Block const&)const; // _ZNK12BeehiveBlock10getVariantERK5Block
    virtual void getMappedFace(unsigned char, Block const&)const; // _ZNK12BeehiveBlock13getMappedFaceEhRK5Block
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK12BeehiveBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    virtual void init(); // _ZN12BeehiveBlock4initEv
    virtual bool canBeSilkTouched()const; // _ZNK12BeehiveBlock16canBeSilkTouchedEv
    BeehiveBlock(std::string const&, int); // _ZN12BeehiveBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _getBeehiveBlockActor(BlockSource &, BlockPos const&)const; // _ZNK12BeehiveBlock21_getBeehiveBlockActorER11BlockSourceRK8BlockPos
    bool hasHoneyToHarvest(Block const&); // _ZN12BeehiveBlock17hasHoneyToHarvestERK5Block
    void _carriedItemCanUse(ItemStack &)const; // _ZNK12BeehiveBlock18_carriedItemCanUseER9ItemStack
    void _hasLitCampfireBelow(BlockSource const&, BlockPos)const; // _ZNK12BeehiveBlock20_hasLitCampfireBelowERK11BlockSource8BlockPos
    void evictAll(BlockSource &, BlockPos const&, bool)const; // _ZNK12BeehiveBlock8evictAllER11BlockSourceRK8BlockPosb
    void emitHoneyComb(BlockSource &, BlockPos const&)const; // _ZNK12BeehiveBlock13emitHoneyCombER11BlockSourceRK8BlockPos
    void resetHoneyLevel(BlockSource &, Block const&, BlockPos const&); // _ZN12BeehiveBlock15resetHoneyLevelER11BlockSourceRK5BlockRK8BlockPos
    void _playShearSound(BlockSource &, BlockPos const&)const; // _ZNK12BeehiveBlock15_playShearSoundER11BlockSourceRK8BlockPos
    void _fillHoneyBottle(Player &, ItemStack &, ItemStack &, BlockSource &, BlockPos const&)const; // _ZNK12BeehiveBlock16_fillHoneyBottleER6PlayerR9ItemStackS3_R11BlockSourceRK8BlockPos
    void deliverNectar(BlockSource &, Block const&, BlockPos const&); // _ZN12BeehiveBlock13deliverNectarER11BlockSourceRK5BlockRK8BlockPos
    void _getSilkTouchItemInstance(Block const&, Player &, BlockPos const&)const; // _ZNK12BeehiveBlock25_getSilkTouchItemInstanceERK5BlockR6PlayerRK8BlockPos
    void _playBottleSound(BlockSource &, BlockPos const&)const; // _ZNK12BeehiveBlock16_playBottleSoundER11BlockSourceRK8BlockPos
    void getNumberOfOccupants(BlockSource &, BlockPos const&)const; // _ZNK12BeehiveBlock20getNumberOfOccupantsER11BlockSourceRK8BlockPos
};
