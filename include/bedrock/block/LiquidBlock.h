#pragma once

#include <string>
#include "BlockLegacy.h"


class LiquidBlock : BlockLegacy {

public:
    ~LiquidBlock(); // _ZN11LiquidBlockD2Ev
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK11LiquidBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool canContainLiquid()const; // _ZNK11LiquidBlock16canContainLiquidEv
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK11LiquidBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK11LiquidBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void mayPick(BlockSource &, Block const&, bool)const; // _ZNK11LiquidBlock7mayPickER11BlockSourceRK5Blockb
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK11LiquidBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK11LiquidBlock16getResourceCountER6RandomRK5Blocki
    virtual void handleEntityInside(BlockSource &, BlockPos const&, Actor *, Vec3 &)const; // _ZNK11LiquidBlock18handleEntityInsideER11BlockSourceRK8BlockPosP5ActorR4Vec3
    virtual void getMapColor(BlockSource &, BlockPos const&)const; // _ZNK11LiquidBlock11getMapColorER11BlockSourceRK8BlockPos
    virtual void getColor(Block const&)const; // _ZNK11LiquidBlock8getColorERK5Block
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const; // _ZNK11LiquidBlock13getColorAtPosER11BlockSourceRK8BlockPos
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK11LiquidBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    virtual bool canBeSilkTouched()const; // _ZNK11LiquidBlock16canBeSilkTouchedEv
    LiquidBlock(std::string const&, int, Material const&); // _ZN11LiquidBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
    void trySpreadFire(BlockSource &, BlockPos const&, Random &)const; // _ZNK11LiquidBlock13trySpreadFireER11BlockSourceRK8BlockPosR6Random
    void getHeightFromDepth(int); // _ZN11LiquidBlock18getHeightFromDepthEi
    void getHeightFromData(int); // _ZN11LiquidBlock17getHeightFromDataEi
    void _getFlow(BlockSource &, BlockPos const&)const; // _ZNK11LiquidBlock8_getFlowER11BlockSourceRK8BlockPos
    void getTickDelay(BlockSource &)const; // _ZNK11LiquidBlock12getTickDelayER11BlockSource
    void getBrightness(BlockSource &, BlockPos const&); // _ZN11LiquidBlock13getBrightnessER11BlockSourceRK8BlockPos
    void getSlopeAngle(BlockSource &, BlockPos const&, Material const&); // _ZN11LiquidBlock13getSlopeAngleER11BlockSourceRK8BlockPosRK8Material
    void emitFizzParticle(BlockSource &, BlockPos const&)const; // _ZNK11LiquidBlock16emitFizzParticleER11BlockSourceRK8BlockPos
    void getDepth(BlockSource &, BlockPos const&)const; // _ZNK11LiquidBlock8getDepthER11BlockSourceRK8BlockPos
    void getRenderedDepth(BlockSource &, BlockPos const&)const; // _ZNK11LiquidBlock16getRenderedDepthER11BlockSourceRK8BlockPos
    void solidify(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK11LiquidBlock8solidifyER11BlockSourceRK8BlockPosS4_
};
