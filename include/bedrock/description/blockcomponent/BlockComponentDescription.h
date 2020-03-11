#pragma once

#include "../../block/BlockLegacy.h"
#include "../../definition/BlockDefinition.h"
#include "../../nbt/CompoundTag.h"
#include <string>


class BlockComponentDescription {

public:
    virtual ~BlockComponentDescription();
    virtual std::string getName()const;
    virtual void initializeComponent(BlockLegacy &)const;
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition
    virtual bool isNetworkComponent()const;
    virtual void buildNetworkTag()const;
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&);

    BlockComponentDescription();
};
