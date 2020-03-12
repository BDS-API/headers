#pragma once

#include "../../nbt/CompoundTag.h"
#include "../../definition/BlockDefinition.h"
#include "../../block/BlockLegacy.h"


class BlockComponentDescription {

public:
    virtual void initializeComponent(BlockLegacy &)const;
    virtual std::string getName()const;
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&);
    ~BlockComponentDescription();
    virtual void buildNetworkTag()const;
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition
    virtual bool isNetworkComponent()const;
    BlockComponentDescription();
};
