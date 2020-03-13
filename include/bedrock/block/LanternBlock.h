#pragma once

#include <string>
#include "BlockLegacy.h"


class LanternBlock : BlockLegacy {

public:
    ~LanternBlock(); // _ZN12LanternBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK12LanternBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual bool isWaterBlocking()const; // _ZNK12LanternBlock15isWaterBlockingEv
    virtual void waterSpreadCausesSpawn()const; // _ZNK12LanternBlock22waterSpreadCausesSpawnEv
    virtual bool canContainLiquid()const; // _ZNK12LanternBlock16canContainLiquidEv
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK12LanternBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void movedByPiston(BlockSource &, BlockPos const&)const; // _ZNK12LanternBlock13movedByPistonER11BlockSourceRK8BlockPos
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK12LanternBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK12LanternBlock17playerWillDestroyER6PlayerRK8BlockPosRK5Block
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK12LanternBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK12LanternBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK12LanternBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK12LanternBlock13playerDestroyER6PlayerRK8BlockPosRK5Block
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK12LanternBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK12LanternBlock14getVisualShapeERK5BlockR4AABBb
    virtual bool canBeSilkTouched()const; // _ZNK12LanternBlock16canBeSilkTouchedEv
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK12LanternBlock24getSilkTouchItemInstanceERK5Block
    LanternBlock(std::string const&, int); // _ZN12LanternBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _couldHang(BlockSource &, BlockPos const&)const; // _ZNK12LanternBlock10_couldHangER11BlockSourceRK8BlockPos
    void _checkToQueueTick(BlockSource &, BlockPos const&)const; // _ZNK12LanternBlock17_checkToQueueTickER11BlockSourceRK8BlockPos
};
