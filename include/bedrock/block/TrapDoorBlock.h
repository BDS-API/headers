#pragma once

#include "../../unmapped/Material"
#include "../actor/Player"
#include "../actor/Actor"
#include "../util/Vec3"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/AABB"


class TrapDoorBlock : BlockLegacy {

public:
    TrapDoorBlock::~TrapDoorBlock()
    virtual bool isInteractiveBlock()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool canBeSilkTouched()const;

    TrapDoorBlock(std::string const&, int, Material const&);
    void _toggleOpen(BlockSource &, Actor *, BlockPos const&)const;
    void setOpen(BlockSource &, BlockPos const&, bool)const;
};
