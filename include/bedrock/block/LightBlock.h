#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "AirBlock.h"
#include "../../unmapped/Material.h"
#include "../util/Vec3.h"
#include "../actor/unmapped/ActorBlockSyncMessage.h"
#include "../../unmapped/Block.h"


class LightBlock : AirBlock {

public:
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void init();
    virtual void getLightEmission(Block const&)const;
    ~LightBlock();
    virtual void tryToPlace(BlockSource &, BlockPos const&, Block const&, ActorBlockSyncMessage const*)const;
    LightBlock(std::string const&, int, Material const&);
};
