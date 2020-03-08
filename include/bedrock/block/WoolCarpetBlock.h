#pragma once

#include "../actor/Actor"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/AABB"


class WoolCarpetBlock : BlockLegacy {

public:
    WoolCarpetBlock::~WoolCarpetBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    WoolCarpetBlock(std::string const&, int);
};
