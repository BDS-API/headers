#pragma once

#include <string>
#include "BlockLegacy.h"


class WoolCarpetBlock : BlockLegacy {

public:
    ~WoolCarpetBlock(); // _ZN15WoolCarpetBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK15WoolCarpetBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const; // _ZNK15WoolCarpetBlock17getCollisionShapeER4AABBRK5BlockR11BlockSourceRK8BlockPosP5Actor
    virtual void waterSpreadCausesSpawn()const; // _ZNK15WoolCarpetBlock22waterSpreadCausesSpawnEv
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK15WoolCarpetBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK15WoolCarpetBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK15WoolCarpetBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK15WoolCarpetBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK15WoolCarpetBlock15getResourceItemER6RandomRK5Blocki
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK15WoolCarpetBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void getMapColor(BlockSource &, BlockPos const&)const; // _ZNK15WoolCarpetBlock11getMapColorER11BlockSourceRK8BlockPos
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK15WoolCarpetBlock28isAuxValueRelevantForPickingEv
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK15WoolCarpetBlock14getVisualShapeERK5BlockR4AABBb
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK15WoolCarpetBlock24getSilkTouchItemInstanceERK5Block
    WoolCarpetBlock(std::string const&, int); // _ZN15WoolCarpetBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
