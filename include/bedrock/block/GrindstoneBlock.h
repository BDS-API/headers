#pragma once

#include <string>
#include "BlockLegacy.h"


class GrindstoneBlock : BlockLegacy {

public:
    ~GrindstoneBlock(); // _ZN15GrindstoneBlockD2Ev
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK15GrindstoneBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool isInteractiveBlock()const; // _ZNK15GrindstoneBlock18isInteractiveBlockEv
    virtual bool canContainLiquid()const; // _ZNK15GrindstoneBlock16canContainLiquidEv
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK15GrindstoneBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK15GrindstoneBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK15GrindstoneBlock3useER6PlayerRK8BlockPos
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK15GrindstoneBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK15GrindstoneBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK15GrindstoneBlock14getVisualShapeERK5BlockR4AABBb
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK15GrindstoneBlock24getSilkTouchItemInstanceERK5Block
    GrindstoneBlock(std::string const&, int); // _ZN15GrindstoneBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _getShape(Block const&, AABB &)const; // _ZNK15GrindstoneBlock9_getShapeERK5BlockR4AABB
    void _determineAttachment(Actor &, BlockPos const&, unsigned char)const; // _ZNK15GrindstoneBlock20_determineAttachmentER5ActorRK8BlockPosh
};
