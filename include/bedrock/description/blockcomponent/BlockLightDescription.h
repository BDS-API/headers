#pragma once

#include "../../definition/BlockDefinition"
#include "../../block/BlockLegacy"
#include "../../nbt/CompoundTag"


class BlockLightDescription : BlockComponentDescription {

public:
    static long NameID[abi:cxx11];

    BlockLightDescription::~BlockLightDescription()
    virtual void getName()const;
    virtual void initializeComponent(BlockLegacy &)const;
    virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const;
    virtual bool isNetworkComponent()const;
    virtual void buildNetworkTag()const;
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&);

    BlockLightDescription(void);
};
