#pragma once

#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../actor/Player"
#include "../../unmapped/Material"


class BarrelBlock : FaceDirectionalBlock {

public:
    BarrelBlock::~BarrelBlock()
    virtual bool isContainerBlock()const;
    virtual bool isInteractiveBlock()const;
    virtual bool isSignalSource()const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool hasComparatorSignal()const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void getVariant(Block const&)const;
    virtual void getFaceFlip(unsigned char, Block const&)const;

    BarrelBlock(std::string const&, int, Material const&);
    void setOpen(bool, BlockSource &, BlockPos const&);
};
