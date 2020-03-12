#pragma once

#include <string>
#include "ActorBlock.h"


class FlowerPotBlock : ActorBlock {

public:
    virtual bool isInteractiveBlock()const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    ~FlowerPotBlock();
    virtual bool canContainLiquid()const;
    virtual bool isValidAuxValue(int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    FlowerPotBlock(std::string const&, int);
    void getFlowerPotEntity(BlockSource &, BlockPos const&)const;
    bool isCubeShaped();
    bool isSolidRender()const;
    bool isSupportedBlock(Block const&)const;
};
