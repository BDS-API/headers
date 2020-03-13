#pragma once

#include <string>
#include "BlockLegacy.h"


class BasePressurePlateBlock : BlockLegacy {

public:
    ~BasePressurePlateBlock(); // _ZN22BasePressurePlateBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK22BasePressurePlateBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const; // _ZNK22BasePressurePlateBlock17getCollisionShapeER4AABBRK5BlockR11BlockSourceRK8BlockPosP5Actor
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK22BasePressurePlateBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool isSignalSource()const; // _ZNK22BasePressurePlateBlock14isSignalSourceEv
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const; // _ZNK22BasePressurePlateBlock23shouldConnectToRedstoneER11BlockSourceRK8BlockPosi
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK22BasePressurePlateBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK22BasePressurePlateBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK22BasePressurePlateBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK22BasePressurePlateBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK22BasePressurePlateBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual bool isAttachedTo(BlockSource &, BlockPos const&, BlockPos &)const; // _ZNK22BasePressurePlateBlock12isAttachedToER11BlockSourceRK8BlockPosRS2_
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const; // _ZNK22BasePressurePlateBlock12entityInsideER11BlockSourceRK8BlockPosR5Actor
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK22BasePressurePlateBlock14getVisualShapeERK5BlockR4AABBb
    virtual void getVariant(Block const&)const; // _ZNK22BasePressurePlateBlock10getVariantERK5Block
    virtual bool canSpawnOn()const; // _ZNK22BasePressurePlateBlock10canSpawnOnEv
    virtual void getTickDelay()const; // _ZNK22BasePressurePlateBlock12getTickDelayEv
    virtual void getSensitiveAABB(BlockPos const&)const; // _ZNK22BasePressurePlateBlock16getSensitiveAABBERK8BlockPos
    BasePressurePlateBlock(std::string const&, int, Material const&); // _ZN22BasePressurePlateBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
    void checkPressed(BlockSource &, BlockPos const&, int, int)const; // _ZNK22BasePressurePlateBlock12checkPressedER11BlockSourceRK8BlockPosii
};
