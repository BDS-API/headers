#pragma once

#include <string>
#include "BlockLegacy.h"


class BedBlock : BlockLegacy {

public:
    static long HEAD_DIRECTION_OFFSETS;
    static long HEAD_PIECE_DATA;
    static long OCCUPIED_DATA;

    ~BedBlock(); // _ZN8BedBlockD2Ev
    virtual void getNextBlockPermutation(Block const&)const; // _ZNK8BedBlock23getNextBlockPermutationERK5Block
    virtual bool isInteractiveBlock()const; // _ZNK8BedBlock18isInteractiveBlockEv
    virtual bool canFillAtPos(BlockSource &, BlockPos const&, Block const&)const; // _ZNK8BedBlock12canFillAtPosER11BlockSourceRK8BlockPosRK5Block
    virtual void sanitizeFillBlock(BlockSource &, BlockPos const&, Block const&)const; // _ZNK8BedBlock17sanitizeFillBlockER11BlockSourceRK8BlockPosRK5Block
    virtual void onFillBlock(BlockSource &, BlockPos const&, Block const&)const; // _ZNK8BedBlock11onFillBlockER11BlockSourceRK8BlockPosRK5Block
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK8BedBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK8BedBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const; // _ZNK8BedBlock8onFallOnER11BlockSourceRK8BlockPosP5Actorf
    virtual void updateEntityAfterFallOn(Actor &)const; // _ZNK8BedBlock23updateEntityAfterFallOnER5Actor
    virtual bool isBounceBlock()const; // _ZNK8BedBlock13isBounceBlockEv
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK8BedBlock17playerWillDestroyER6PlayerRK8BlockPosRK5Block
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK8BedBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos &)const; // _ZNK8BedBlock13getSecondPartER11BlockSourceRK8BlockPosRS2_
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK8BedBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const; // _ZNK8BedBlock14spawnResourcesER11BlockSourceRK8BlockPosRK5Blockfi
    virtual void use(Player &, BlockPos const&)const; // _ZNK8BedBlock3useER6PlayerRK8BlockPos
    virtual void telemetryVariant(BlockSource &, BlockPos const&)const; // _ZNK8BedBlock16telemetryVariantER11BlockSourceRK8BlockPos
    virtual void getVariant(Block const&)const; // _ZNK8BedBlock10getVariantERK5Block
    virtual void getMappedFace(unsigned char, Block const&)const; // _ZNK8BedBlock13getMappedFaceEhRK5Block
    virtual bool canBeSilkTouched()const; // _ZNK8BedBlock16canBeSilkTouchedEv
    BedBlock(std::string const&, int); // _ZN8BedBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void setOccupied(BlockSource &, BlockPos const&, bool); // _ZN8BedBlock11setOccupiedER11BlockSourceRK8BlockPosb
    void findStandUpPosition(BlockSource &, BlockPos const&, int, BlockPos &); // _ZN8BedBlock19findStandUpPositionER11BlockSourceRK8BlockPosiRS2_
};
