#pragma once

#include <string>
#include "BlockLegacy.h"
#include <vector>


class EndPortalFrameBlock : BlockLegacy {

public:
    ~EndPortalFrameBlock(); // _ZN19EndPortalFrameBlockD2Ev
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const; // _ZNK19EndPortalFrameBlock8addAABBsERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EE
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const; // _ZNK19EndPortalFrameBlock18addCollisionShapesERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EEP5Actor
    virtual bool isInteractiveBlock()const; // _ZNK19EndPortalFrameBlock18isInteractiveBlockEv
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK19EndPortalFrameBlock16getResourceCountER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK19EndPortalFrameBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK19EndPortalFrameBlock3useER6PlayerRK8BlockPos
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK19EndPortalFrameBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual bool hasComparatorSignal()const; // _ZNK19EndPortalFrameBlock19hasComparatorSignalEv
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const; // _ZNK19EndPortalFrameBlock19getComparatorSignalER11BlockSourceRK8BlockPosRK5Blockh
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK19EndPortalFrameBlock24getSilkTouchItemInstanceERK5Block
    EndPortalFrameBlock(std::string const&, int); // _ZN19EndPortalFrameBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void tryCreatePortal(BlockSource &, BlockPos const&); // _ZN19EndPortalFrameBlock15tryCreatePortalER11BlockSourceRK8BlockPos
    void createPortal(BlockSource &, BlockPos const&); // _ZN19EndPortalFrameBlock12createPortalER11BlockSourceRK8BlockPos
};
