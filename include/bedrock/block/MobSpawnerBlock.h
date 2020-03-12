#pragma once

#include <string>
#include "../util/Random.h"
#include "../../unmapped/Block.h"
#include "ActorBlock.h"


class MobSpawnerBlock : ActorBlock {

public:
    virtual bool isInteractiveBlock()const;
    virtual void getExperienceDrop(Random &)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    ~MobSpawnerBlock();
    virtual bool canContainLiquid()const;
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    virtual void getResourceItem(Random &, Block const&, int)const;
    MobSpawnerBlock(std::string const&, int);
};
