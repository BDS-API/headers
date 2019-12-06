#pragma once

class LootComponentDescription : BlockComponentDescription {

public:
    virtual ~LootComponentDescription();
    virtual void initializeComponent(BlockLegacy &)const;
    virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const;

    void LootComponentDescription(void);
};
