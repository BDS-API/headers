#pragma once

#include <string>
#include "BlockLegacy.h"


class TorchBlock : BlockLegacy {

public:
    static long DATA_FROM_FACING;
    static long FACING_FROM_DATA;

    ~TorchBlock(); // _ZN10TorchBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK10TorchBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK10TorchBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void waterSpreadCausesSpawn()const; // _ZNK10TorchBlock22waterSpreadCausesSpawnEv
    virtual bool canContainLiquid()const; // _ZNK10TorchBlock16canContainLiquidEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK10TorchBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK10TorchBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK10TorchBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK10TorchBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK10TorchBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void getIconYOffset()const; // _ZNK10TorchBlock14getIconYOffsetEv
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const; // _ZNK10TorchBlock14getRenderLayerERK5BlockR11BlockSourceRK8BlockPos
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK10TorchBlock14getVisualShapeERK5BlockR4AABBb
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK10TorchBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    virtual bool canBeSilkTouched()const; // _ZNK10TorchBlock16canBeSilkTouchedEv
//  TorchBlock(std::string const&, int, MaterialType); //TODO: incomplete function definition // _ZN10TorchBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi12MaterialType
    bool canBePlacedOn(BlockSource &, BlockPos const&, unsigned char)const; // _ZNK10TorchBlock13canBePlacedOnER11BlockSourceRK8BlockPosh
    void _checkDoPop(BlockSource &, BlockPos const&)const; // _ZNK10TorchBlock11_checkDoPopER11BlockSourceRK8BlockPos
//  void _flameParticlePos(BlockPos const&, TorchFacing)const; //TODO: incomplete function definition // _ZNK10TorchBlock17_flameParticlePosERK8BlockPos11TorchFacing
};
