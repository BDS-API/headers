#pragma once

class BlockExplodeableDescription : BlockComponentDescription {

public:
    virtual ~BlockExplodeableDescription();
    virtual void initializeComponent(BlockLegacy &)const;
    virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const;

    void BlockExplodeableDescription(void);
};
