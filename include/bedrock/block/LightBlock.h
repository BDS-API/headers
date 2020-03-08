#pragma once

#include "../actor/unmapped/ActorBlockSyncMessage"
#include "../actor/Actor"
#include "../util/Vec3"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../../unmapped/Material"


class LightBlock : AirBlock {

public:
    LightBlock::~LightBlock()
    virtual void getLightEmission(Block const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void tryToPlace(BlockSource &, BlockPos const&, Block const&, ActorBlockSyncMessage const*)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void init();

    LightBlock(std::string const&, int, Material const&);
};
