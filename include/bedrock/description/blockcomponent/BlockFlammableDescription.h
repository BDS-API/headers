#pragma once

class BlockFlammableDescription : BlockComponentDescription {

public:
    static long NameID[abi:cxx11];

    virtual BlockFlammableDescription::~BlockFlammableDescription();
    virtual void getName[abi:cxx11](void)const;
    virtual void initializeComponent(BlockLegacy &)const;
    virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const;

    BlockFlammableDescription(void);
};
