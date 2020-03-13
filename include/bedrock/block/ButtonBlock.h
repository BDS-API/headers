#pragma once

#include <string>
#include "BlockLegacy.h"


class ButtonBlock : BlockLegacy {

public:
    ~ButtonBlock(); // _ZN11ButtonBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK11ButtonBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const; // _ZNK11ButtonBlock17getCollisionShapeER4AABBRK5BlockR11BlockSourceRK8BlockPosP5Actor
    virtual bool isInteractiveBlock()const; // _ZNK11ButtonBlock18isInteractiveBlockEv
    virtual bool isButtonBlock()const; // _ZNK11ButtonBlock13isButtonBlockEv
    virtual bool isSignalSource()const; // _ZNK11ButtonBlock14isSignalSourceEv
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const; // _ZNK11ButtonBlock23shouldConnectToRedstoneER11BlockSourceRK8BlockPosi
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK11ButtonBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK11ButtonBlock16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK11ButtonBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const; // _ZNK11ButtonBlock8mayPlaceER11BlockSourceRK8BlockPosh
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK11ButtonBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK11ButtonBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK11ButtonBlock16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK11ButtonBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK11ButtonBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK11ButtonBlock3useER6PlayerRK8BlockPos
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK11ButtonBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual bool isAttachedTo(BlockSource &, BlockPos const&, BlockPos &)const; // _ZNK11ButtonBlock12isAttachedToER11BlockSourceRK8BlockPosRS2_
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const; // _ZNK11ButtonBlock12entityInsideER11BlockSourceRK8BlockPosR5Actor
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK11ButtonBlock14getVisualShapeERK5BlockR4AABBb
    virtual void getUIShape(Block const&, AABB &)const; // _ZNK11ButtonBlock10getUIShapeERK5BlockR4AABB
    virtual void getVariant(Block const&)const; // _ZNK11ButtonBlock10getVariantERK5Block
    virtual bool canSpawnOn()const; // _ZNK11ButtonBlock10canSpawnOnEv
    ButtonBlock(std::string const&, int, Material const&, bool); // _ZN11ButtonBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Materialb
    void _checkCanSurvive(BlockSource &, BlockPos const&)const; // _ZNK11ButtonBlock16_checkCanSurviveER11BlockSourceRK8BlockPos
    void _getShape(AABB &, bool, unsigned char, bool)const; // _ZNK11ButtonBlock9_getShapeER4AABBbhb
    void getTickDelay()const; // _ZNK11ButtonBlock12getTickDelayEv
    bool canAttachTo(BlockSource &, BlockPos const&, unsigned char); // _ZN11ButtonBlock11canAttachToER11BlockSourceRK8BlockPosh
    void _buttonPressed(BlockSource &, Block const&, Vec3 const&)const; // _ZNK11ButtonBlock14_buttonPressedER11BlockSourceRK5BlockRK4Vec3
    void _checkPressed(BlockSource &, BlockPos const&)const; // _ZNK11ButtonBlock13_checkPressedER11BlockSourceRK8BlockPos
    void _buttonUnpressed(BlockSource &, Block const&, Vec3 const&)const; // _ZNK11ButtonBlock16_buttonUnpressedER11BlockSourceRK5BlockRK4Vec3
};
