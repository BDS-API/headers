#pragma once

#include <string>
#include "BlockLegacy.h"


class FenceGateBlock : BlockLegacy {

public:
    ~FenceGateBlock(); // _ZN14FenceGateBlockD2Ev
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK14FenceGateBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const; // _ZNK14FenceGateBlock19getLiquidClipVolumeER11BlockSourceRK8BlockPosR4AABB
    virtual bool canConnect(Block const&, unsigned char, Block const&)const; // _ZNK14FenceGateBlock10canConnectERK5BlockhS2_
    virtual bool isInteractiveBlock()const; // _ZNK14FenceGateBlock18isInteractiveBlockEv
    virtual bool isFenceGateBlock()const; // _ZNK14FenceGateBlock16isFenceGateBlockEv
    virtual bool canContainLiquid()const; // _ZNK14FenceGateBlock16canContainLiquidEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK14FenceGateBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK14FenceGateBlock16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK14FenceGateBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void ignoreEntitiesOnPistonMove(Block const&)const; // _ZNK14FenceGateBlock26ignoreEntitiesOnPistonMoveERK5Block
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK14FenceGateBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK14FenceGateBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void use(Player &, BlockPos const&)const; // _ZNK14FenceGateBlock3useER6PlayerRK8BlockPos
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK14FenceGateBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
//  FenceGateBlock(std::string const&, int, WoodType); //TODO: incomplete function definition // _ZN14FenceGateBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi8WoodType
    void _checkIsInWall(BlockSource &, BlockPos const&)const; // _ZNK14FenceGateBlock14_checkIsInWallER11BlockSourceRK8BlockPos
    void _onOpenChanged(BlockSource &, BlockPos const&)const; // _ZNK14FenceGateBlock14_onOpenChangedER11BlockSourceRK8BlockPos
};
