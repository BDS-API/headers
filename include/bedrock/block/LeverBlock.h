#pragma once

#include <string>
#include "BlockLegacy.h"


class LeverBlock : BlockLegacy {

public:
    ~LeverBlock(); // _ZN10LeverBlockD2Ev
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK10LeverBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool isInteractiveBlock()const; // _ZNK10LeverBlock18isInteractiveBlockEv
    virtual bool isSignalSource()const; // _ZNK10LeverBlock14isSignalSourceEv
    virtual void onFillBlock(BlockSource &, BlockPos const&, Block const&)const; // _ZNK10LeverBlock11onFillBlockER11BlockSourceRK8BlockPosRK5Block
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const; // _ZNK10LeverBlock23shouldConnectToRedstoneER11BlockSourceRK8BlockPosi
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK10LeverBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK10LeverBlock8onRemoveER11BlockSourceRK8BlockPos
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK10LeverBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const; // _ZNK10LeverBlock8mayPlaceER11BlockSourceRK8BlockPosh
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK10LeverBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK10LeverBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK10LeverBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK10LeverBlock3useER6PlayerRK8BlockPos
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK10LeverBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual bool isAttachedTo(BlockSource &, BlockPos const&, BlockPos &)const; // _ZNK10LeverBlock12isAttachedToER11BlockSourceRK8BlockPosRS2_
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK10LeverBlock14getVisualShapeERK5BlockR4AABBb
    virtual bool canSpawnOn()const; // _ZNK10LeverBlock10canSpawnOnEv
    virtual void updateShape(BlockSource *, BlockPos const&); // _ZN10LeverBlock11updateShapeEP11BlockSourceRK8BlockPos
    LeverBlock(std::string const&, int); // _ZN10LeverBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _getShape(Block const&, AABB &)const; // _ZNK10LeverBlock9_getShapeERK5BlockR4AABB
    void getLeverFacing(int); // _ZN10LeverBlock14getLeverFacingEi
    void _getFacing(Block const&)const; // _ZNK10LeverBlock10_getFacingERK5Block
    void _checkCanSurvive(BlockSource &, BlockPos const&)const; // _ZNK10LeverBlock16_checkCanSurviveER11BlockSourceRK8BlockPos
    void getSignal(BlockSource &, BlockPos const&, int)const; // _ZNK10LeverBlock9getSignalER11BlockSourceRK8BlockPosi
};
