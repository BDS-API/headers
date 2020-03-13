#pragma once

#include <string>
#include "BlockLegacy.h"
#include <vector>


class ThinFenceBlock : BlockLegacy {

public:
    ~ThinFenceBlock(); // _ZN14ThinFenceBlockD2Ev
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const; // _ZNK14ThinFenceBlock8addAABBsERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EE
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK14ThinFenceBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const; // _ZNK14ThinFenceBlock18addCollisionShapesERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EEP5Actor
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const; // _ZNK14ThinFenceBlock19getLiquidClipVolumeER11BlockSourceRK8BlockPosR4AABB
    virtual bool canConnect(Block const&, unsigned char, Block const&)const; // _ZNK14ThinFenceBlock10canConnectERK5BlockhS2_
    virtual bool isThinFenceBlock()const; // _ZNK14ThinFenceBlock16isThinFenceBlockEv
    virtual bool canContainLiquid()const; // _ZNK14ThinFenceBlock16canContainLiquidEv
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const; // _ZNK14ThinFenceBlock19canBeUsedInCommandsEbRK15BaseGameVersion
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK14ThinFenceBlock16getResourceCountER6RandomRK5Blocki
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const; // _ZNK14ThinFenceBlock21getVisualShapeInWorldERK5BlockR11BlockSourceRK8BlockPosR4AABBb
    ThinFenceBlock(std::string const&, int, Material const&, bool, bool, bool); // _ZN14ThinFenceBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Materialbbb
};
