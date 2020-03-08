#pragma once

#include "../../definition/BlockDefinition"
#include "../../block/BlockLegacy"


class BlockMapColorDescription : BlockComponentDescription {

public:
    static long NameID[abi:cxx11];

    BlockMapColorDescription::~BlockMapColorDescription()
    virtual void getName()const;
    virtual void initializeComponent(BlockLegacy &)const;
    virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const;

    BlockMapColorDescription(void);
};
