#pragma once

#include <string>
#include "BlockLegacy.h"


class TrapDoorBlock : BlockLegacy {

public:
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual bool isInteractiveBlock()const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool canBeSilkTouched()const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    ~TrapDoorBlock();
    TrapDoorBlock(std::string const&, int, Material const&);
    void setOpen(BlockSource &, BlockPos const&, bool)const;
    void _toggleOpen(BlockSource &, Actor *, BlockPos const&)const;
};
