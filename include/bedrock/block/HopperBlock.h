#pragma once

#include <string>
#include <vector>
#include "ActorBlock.h"


class HopperBlock : ActorBlock {

public:
    ~HopperBlock(); // _ZN11HopperBlockD2Ev
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const; // _ZNK11HopperBlock8addAABBsERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EE
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const; // _ZNK11HopperBlock18addCollisionShapesERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EEP5Actor
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition // _ZNK11HopperBlock17canProvideSupportERK5Blockh16BlockSupportType
    virtual bool isContainerBlock()const; // _ZNK11HopperBlock16isContainerBlockEv
    virtual bool isInteractiveBlock()const; // _ZNK11HopperBlock18isInteractiveBlockEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK11HopperBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK11HopperBlock8onRemoveER11BlockSourceRK8BlockPos
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK11HopperBlock16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK11HopperBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void getRedstoneProperty(BlockSource &, BlockPos const&)const; // _ZNK11HopperBlock19getRedstonePropertyER11BlockSourceRK8BlockPos
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK11HopperBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK11HopperBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK11HopperBlock3useER6PlayerRK8BlockPos
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK11HopperBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual bool hasComparatorSignal()const; // _ZNK11HopperBlock19hasComparatorSignalEv
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const; // _ZNK11HopperBlock19getComparatorSignalER11BlockSourceRK8BlockPosRK5Blockh
    void getAttachedOffset(unsigned char); // _ZN11HopperBlock17getAttachedOffsetEh
    void getHopperBlockEntity(BlockSource &, BlockPos const&); // _ZN11HopperBlock20getHopperBlockEntityER11BlockSourceRK8BlockPos
    HopperBlock(std::string const&, int); // _ZN11HopperBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _installCircuit(BlockSource &, BlockPos const&)const; // _ZNK11HopperBlock15_installCircuitER11BlockSourceRK8BlockPos
};
