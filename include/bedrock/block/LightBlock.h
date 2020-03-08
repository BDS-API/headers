#pragma once

#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../actor/unmapped/ActorBlockSyncMessage"
#include "../../unmapped/Material"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../util/Vec3"


class LightBlock : AirBlock {

public:
    virtual LightBlock::~LightBlock()
    virtual void getLightEmission(Block const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void tryToPlace(BlockSource &, BlockPos const&, Block const&, ActorBlockSyncMessage const*)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void init();

    LightBlock(std::string const&, int, Material const&);
};
