#pragma once

#include "../../block/BlockLegacy"
#include "../../nbt/CompoundTag"
#include "../../definition/BlockDefinition"


class BlockComponentDescription {

public:
    virtual BlockComponentDescription::~BlockComponentDescription()
    virtual void getName()const;
    virtual void initializeComponent(BlockLegacy &)const;
    virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const;
    virtual bool isNetworkComponent()const;
    virtual void buildNetworkTag()const;
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&);

    BlockComponentDescription(void);
};
