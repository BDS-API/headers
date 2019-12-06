#pragma once

class BlockFlammableDescription : BlockComponentDescription {

public:
    virtual ~BlockFlammableDescription();
    virtual void initializeComponent(BlockLegacy &)const;
    virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const;

    void BlockFlammableDescription(void);
};
