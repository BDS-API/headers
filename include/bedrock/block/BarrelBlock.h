#pragma once

#include <string>
#include "FaceDirectionalBlock.h"


class BarrelBlock : FaceDirectionalBlock {

public:
    virtual void getVariant(Block const&)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual bool isSignalSource()const;
    ~BarrelBlock();
    virtual bool isContainerBlock()const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getFaceFlip(unsigned char, Block const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool isInteractiveBlock()const;
    virtual bool hasComparatorSignal()const;
    BarrelBlock(std::string const&, int, Material const&);
    void setOpen(bool, BlockSource &, BlockPos const&);
};
