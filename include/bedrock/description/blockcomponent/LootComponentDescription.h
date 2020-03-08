#pragma once

#include "../../definition/BlockDefinition"
#include "../../block/BlockLegacy"


class LootComponentDescription : BlockComponentDescription {

public:
    static long NameID[abi:cxx11];

    LootComponentDescription::~LootComponentDescription()
    virtual void getName()const;
    virtual void initializeComponent(BlockLegacy &)const;
    virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const;

    LootComponentDescription(void);
};
