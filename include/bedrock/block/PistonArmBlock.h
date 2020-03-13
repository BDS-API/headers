#pragma once

#include <string>
#include "BlockLegacy.h"
#include <vector>


class PistonArmBlock : BlockLegacy {

public:
    ~PistonArmBlock(); // _ZN14PistonArmBlockD2Ev
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const; // _ZNK14PistonArmBlock17getCollisionShapeER4AABBRK5BlockR11BlockSourceRK8BlockPosP5Actor
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const; // _ZNK14PistonArmBlock18addCollisionShapesERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EEP5Actor
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition // _ZNK14PistonArmBlock17canProvideSupportERK5Blockh16BlockSupportType
    virtual bool canContainLiquid()const; // _ZNK14PistonArmBlock16canContainLiquidEv
    virtual bool breaksFallingBlocks(Block const&)const; // _ZNK14PistonArmBlock19breaksFallingBlocksERK5Block
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK14PistonArmBlock17playerWillDestroyER6PlayerRK8BlockPosRK5Block
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK14PistonArmBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos &)const; // _ZNK14PistonArmBlock13getSecondPartER11BlockSourceRK8BlockPosRS2_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK14PistonArmBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK14PistonArmBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const; // _ZNK14PistonArmBlock4clipER11BlockSourceRK8BlockPosRK4Vec3S7_b
    virtual bool canBeSilkTouched()const; // _ZNK14PistonArmBlock16canBeSilkTouchedEv
//  PistonArmBlock(std::string const&, int, PistonBlock::Type); //TODO: incomplete function definition // _ZN14PistonArmBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiN11PistonBlock4TypeE
    void _getCollisions(AABB &, AABB &, AABB &, unsigned char)const; // _ZNK14PistonArmBlock14_getCollisionsER4AABBS1_S1_h
    bool isSticky()const; // _ZNK14PistonArmBlock8isStickyEv
};
