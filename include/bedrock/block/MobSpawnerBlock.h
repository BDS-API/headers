#pragma once

#include <string>
#include "ActorBlock.h"


class MobSpawnerBlock : ActorBlock {

public:
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    virtual void getExperienceDrop(Random &)const;
    ~MobSpawnerBlock();
    virtual bool canContainLiquid()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool isInteractiveBlock()const;
    MobSpawnerBlock(std::string const&, int);
};
