#pragma once

#include <string>
#include "BlockLegacy.h"


class TurtleEggBlock : BlockLegacy {

public:
    ~TurtleEggBlock(); // _ZN14TurtleEggBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK14TurtleEggBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void waterSpreadCausesSpawn()const; // _ZNK14TurtleEggBlock22waterSpreadCausesSpawnEv
    virtual bool canContainLiquid()const; // _ZNK14TurtleEggBlock16canContainLiquidEv
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK14TurtleEggBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK14TurtleEggBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void transformOnFall(BlockSource &, BlockPos const&, Actor *, float)const; // _ZNK14TurtleEggBlock15transformOnFallER11BlockSourceRK8BlockPosP5Actorf
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const; // _ZNK14TurtleEggBlock8mayPlaceER11BlockSourceRK8BlockPosh
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK14TurtleEggBlock17playerWillDestroyER6PlayerRK8BlockPosRK5Block
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK14TurtleEggBlock16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK14TurtleEggBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK14TurtleEggBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK14TurtleEggBlock3useER6PlayerRK8BlockPos
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const; // _ZNK14TurtleEggBlock12entityInsideER11BlockSourceRK8BlockPosR5Actor
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK14TurtleEggBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK14TurtleEggBlock28isAuxValueRelevantForPickingEv
    virtual bool canBeSilkTouched()const; // _ZNK14TurtleEggBlock16canBeSilkTouchedEv
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK14TurtleEggBlock24getSilkTouchItemInstanceERK5Block
    TurtleEggBlock(std::string const&, int); // _ZN14TurtleEggBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _destroyEgg(BlockSource &, BlockPos const&, Actor &, int, bool)const; // _ZNK14TurtleEggBlock11_destroyEggER11BlockSourceRK8BlockPosR5Actorib
    void _shouldUpdateHatchLevel(BlockSource &)const; // _ZNK14TurtleEggBlock23_shouldUpdateHatchLevelER11BlockSource
    void _decreaseEggs(BlockSource &, BlockPos const&, unsigned int, bool)const; // _ZNK14TurtleEggBlock13_decreaseEggsER11BlockSourceRK8BlockPosjb
};
