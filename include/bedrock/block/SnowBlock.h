#pragma once

class SnowBlock : BlockLegacy {

public:
    virtual SnowBlock::~SnowBlock();
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void waterSpreadCausesSpawn(void)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void calcGroundFriction(Mob &, BlockPos const&)const;

    SnowBlock(std::string const&, int);
};
