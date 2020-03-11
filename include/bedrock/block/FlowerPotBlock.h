#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "./ActorBlock.h"
#include "../util/BlockPos.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class FlowerPotBlock : ActorBlock {

public:
    virtual ~FlowerPotBlock();
    virtual bool isInteractiveBlock()const;
    virtual bool isValidAuxValue(int)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual bool canContainLiquid()const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;

    FlowerPotBlock(std::string const&, int);
    bool isCubeShaped();
    bool isSolidRender()const;
    void getFlowerPotEntity(BlockSource &, BlockPos const&)const;
    bool isSupportedBlock(Block const&)const;
};
