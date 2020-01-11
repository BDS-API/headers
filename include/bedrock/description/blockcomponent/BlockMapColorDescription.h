#pragma once

class BlockMapColorDescription : BlockComponentDescription {

public:
    static long NameID[abi:cxx11];

    virtual BlockMapColorDescription::~BlockMapColorDescription();
    virtual void getName[abi:cxx11](void)const;
    virtual void initializeComponent(BlockLegacy &)const;
    virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const;

    BlockMapColorDescription(void);
};
