#pragma once

class LootComponentDescription : BlockComponentDescription {

public:
    static long NameID[abi:cxx11];

    virtual LootComponentDescription::~LootComponentDescription();
    virtual void getName[abi:cxx11](void)const;
    virtual void initializeComponent(BlockLegacy &)const;
    virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const;

    LootComponentDescription(void);
};
