#pragma once

#include "../../block/BlockLegacy"
#include "../../nbt/CompoundTag"
#include "../../definition/BlockDefinition"


class BlockLightEmissionDescription : BlockComponentDescription {

public:
    static long NameID[abi:cxx11];

    virtual BlockLightEmissionDescription::~BlockLightEmissionDescription()
    virtual void getName()const;
    virtual void initializeComponent(BlockLegacy &)const;
    virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const;
    virtual bool isNetworkComponent()const;
    virtual void buildNetworkTag()const;
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&);

    BlockLightEmissionDescription(void);
};
