#pragma once

#include <string>
#include "ActorBlock.h"


class BellBlock : ActorBlock {

public:
    ~BellBlock(); // _ZN9BellBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK9BellBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK9BellBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void onProjectileHit(BlockSource &, BlockPos const&, Actor const&)const; // _ZNK9BellBlock15onProjectileHitER11BlockSourceRK8BlockPosRK5Actor
    virtual bool canContainLiquid()const; // _ZNK9BellBlock16canContainLiquidEv
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const; // _ZNK9BellBlock23shouldConnectToRedstoneER11BlockSourceRK8BlockPosi
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK9BellBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void movedByPiston(BlockSource &, BlockPos const&)const; // _ZNK9BellBlock13movedByPistonER11BlockSourceRK8BlockPos
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK9BellBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK9BellBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK9BellBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK9BellBlock3useER6PlayerRK8BlockPos
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK9BellBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const; // _ZNK9BellBlock12entityInsideER11BlockSourceRK8BlockPosR5Actor
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK9BellBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK9BellBlock14getVisualShapeERK5BlockR4AABBb
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK9BellBlock24getSilkTouchItemInstanceERK5Block
    BellBlock(std::string const&, int); // _ZN9BellBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _getShape(Block const&, AABB &)const; // _ZNK9BellBlock9_getShapeERK5BlockR4AABB
    void _determineAttachment(Actor &, BlockSource &, BlockPos const&, unsigned char)const; // _ZNK9BellBlock20_determineAttachmentER5ActorR11BlockSourceRK8BlockPosh
    void _checkAlive(BlockSource &, BlockPos const&)const; // _ZNK9BellBlock11_checkAliveER11BlockSourceRK8BlockPos
    void _sendBellUsedEventToClient(BlockSource const&, Actor const&)const; // _ZNK9BellBlock26_sendBellUsedEventToClientERK11BlockSourceRK5Actor
    bool hasValidAttachment(Block const&, BlockSource &, BlockPos const&)const; // _ZNK9BellBlock18hasValidAttachmentERK5BlockR11BlockSourceRK8BlockPos
};
