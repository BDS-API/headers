#pragma once

#include <string>
#include "ActorBlock.h"


class PistonBlock : ActorBlock {

public:
    static long ARM_DIRECTION_OFFSETS;

    ~PistonBlock(); // _ZN11PistonBlockD2Ev
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition // _ZNK11PistonBlock17canProvideSupportERK5Blockh16BlockSupportType
    virtual bool isValidAuxValue(int)const; // _ZNK11PistonBlock15isValidAuxValueEi
    virtual bool canContainLiquid()const; // _ZNK11PistonBlock16canContainLiquidEv
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const; // _ZNK11PistonBlock23shouldConnectToRedstoneER11BlockSourceRK8BlockPosi
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK11PistonBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK11PistonBlock16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK11PistonBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual bool breaksFallingBlocks(Block const&)const; // _ZNK11PistonBlock19breaksFallingBlocksERK5Block
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK11PistonBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos &)const; // _ZNK11PistonBlock13getSecondPartER11BlockSourceRK8BlockPosRS2_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK11PistonBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK11PistonBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK11PistonBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual bool pushesUpFallingBlocks()const; // _ZNK11PistonBlock21pushesUpFallingBlocksEv
    virtual void getVariant(Block const&)const; // _ZNK11PistonBlock10getVariantERK5Block
    virtual void getMappedFace(unsigned char, Block const&)const; // _ZNK11PistonBlock13getMappedFaceEhRK5Block
    void getFacingDir(unsigned char); // _ZN11PistonBlock12getFacingDirEh
//  PistonBlock(std::string const&, int, PistonBlock::Type); //TODO: incomplete function definition // _ZN11PistonBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiNS_4TypeE
    bool isSticky()const; // _ZNK11PistonBlock8isStickyEv
};
