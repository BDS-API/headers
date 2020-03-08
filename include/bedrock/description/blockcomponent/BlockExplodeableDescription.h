#pragma once

#include "../../block/BlockLegacy"
#include "../../definition/BlockDefinition"


class BlockExplodeableDescription : BlockComponentDescription {

public:
    static long NameID[abi:cxx11];

    virtual BlockExplodeableDescription::~BlockExplodeableDescription()
    virtual void getName()const;
    virtual void initializeComponent(BlockLegacy &)const;
    virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const;

    BlockExplodeableDescription(void);
};
