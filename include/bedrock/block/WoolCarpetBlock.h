#pragma once

#include <string>
#include "BlockLegacy.h"


class WoolCarpetBlock : BlockLegacy {

public:
    ~WoolCarpetBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    WoolCarpetBlock(std::string const&, int);
};
