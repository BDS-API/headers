#pragma once

#include "../util/Random"
#include "../../unmapped/Block"


class MobSpawnerBlock : ActorBlock {

public:
    virtual MobSpawnerBlock::~MobSpawnerBlock()
    virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const;
    virtual bool isInteractiveBlock()const;
    virtual bool canContainLiquid()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getExperienceDrop(Random &)const;

    MobSpawnerBlock(std::string const&, int);
};
