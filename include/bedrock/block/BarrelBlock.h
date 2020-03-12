#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Material.h"
#include "FaceDirectionalBlock.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"


class BarrelBlock : FaceDirectionalBlock {

public:
    virtual void use(Player &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    ~BarrelBlock();
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual bool isSignalSource()const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual bool hasComparatorSignal()const;
    virtual bool isContainerBlock()const;
    virtual bool isInteractiveBlock()const;
    virtual void getFaceFlip(unsigned char, Block const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    BarrelBlock(std::string const&, int, Material const&);
    void setOpen(bool, BlockSource &, BlockPos const&);
};
