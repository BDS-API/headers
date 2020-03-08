#pragma once

#include "../../definition/BlockDefinition"
#include "../../block/BlockLegacy"


class BlockExplodeableDescription : BlockComponentDescription {

public:
    static long NameID[abi:cxx11];

    BlockExplodeableDescription::~BlockExplodeableDescription()
    virtual void getName()const;
    virtual void initializeComponent(BlockLegacy &)const;
    virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const;

    BlockExplodeableDescription(void);
};
