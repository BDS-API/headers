#pragma once

#include <string>
#include "../util/Random.h"
#include "./ActorBlock.h"
#include "../../unmapped/Block.h"


class MobSpawnerBlock : ActorBlock {

public:
    virtual ~MobSpawnerBlock();
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    virtual bool isInteractiveBlock()const;
    virtual bool canContainLiquid()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getExperienceDrop(Random &)const;

    MobSpawnerBlock(std::string const&, int);
};
