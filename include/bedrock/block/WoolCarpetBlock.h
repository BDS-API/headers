#pragma once

#include "../../unmapped/AABB"
#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../actor/Actor"
#include "../../unmapped/Random"


class WoolCarpetBlock : BlockLegacy {

public:
    virtual WoolCarpetBlock::~WoolCarpetBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void waterSpreadCausesSpawn(void)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    WoolCarpetBlock(std::string const&, int);
};
