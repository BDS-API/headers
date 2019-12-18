#pragma once

class LootComponentDescription : BlockComponentDescription {

public:
    static long LootComponentDescription::NameID[abi:cxx11];

    virtual ~LootComponentDescription();
    virtual void getName[abi:cxx11](void)const;
    virtual void initializeComponent(BlockLegacy &)const;
    virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const;

    void LootComponentDescription(void);
};
