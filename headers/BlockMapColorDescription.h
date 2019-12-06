#pragma once

class BlockMapColorDescription : BlockComponentDescription {

public:
    virtual ~BlockMapColorDescription();
    virtual void initializeComponent(BlockLegacy &)const;
    virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const;

    void BlockMapColorDescription(void);
};
