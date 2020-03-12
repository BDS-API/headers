#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "ActorBlock.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../util/Random.h"


class FlowerPotBlock : ActorBlock {

public:
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual bool isInteractiveBlock()const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool isValidAuxValue(int)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool canContainLiquid()const;
    ~FlowerPotBlock();
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    bool isCubeShaped();
    FlowerPotBlock(std::string const&, int);
    bool isSolidRender()const;
    bool isSupportedBlock(Block const&)const;
    void getFlowerPotEntity(BlockSource &, BlockPos const&)const;
};
