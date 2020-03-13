#pragma once

#include <string>
#include "BlockLegacy.h"
#include <vector>


class FenceBlock : BlockLegacy {

public:
    ~FenceBlock(); // _ZN10FenceBlockD2Ev
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK10FenceBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const; // _ZNK10FenceBlock18addCollisionShapesERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EEP5Actor
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const; // _ZNK10FenceBlock19getLiquidClipVolumeER11BlockSourceRK8BlockPosR4AABB
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition // _ZNK10FenceBlock17canProvideSupportERK5Blockh16BlockSupportType
    virtual bool canConnect(Block const&, unsigned char, Block const&)const; // _ZNK10FenceBlock10canConnectERK5BlockhS2_
    virtual bool isFenceBlock()const; // _ZNK10FenceBlock12isFenceBlockEv
    virtual bool canContainLiquid()const; // _ZNK10FenceBlock16canContainLiquidEv
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK10FenceBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK10FenceBlock15getResourceItemER6RandomRK5Blocki
    virtual void use(Player &, BlockPos const&)const; // _ZNK10FenceBlock3useER6PlayerRK8BlockPos
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK10FenceBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK10FenceBlock28isAuxValueRelevantForPickingEv
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const; // _ZNK10FenceBlock21getVisualShapeInWorldERK5BlockR11BlockSourceRK8BlockPosR4AABBb
    virtual bool canBeSilkTouched()const; // _ZNK10FenceBlock16canBeSilkTouchedEv
    FenceBlock(std::string const&, int, Material const&); // _ZN10FenceBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
    void fetchPathableNeighbors(std::vector<BlockPos> &, BlockSource &, BlockPos const&, Vec3 const&)const; // _ZNK10FenceBlock22fetchPathableNeighborsERSt6vectorI8BlockPosSaIS1_EER11BlockSourceRKS1_RK4Vec3
};
