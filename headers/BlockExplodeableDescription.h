#pragma once

class BlockExplodeableDescription : BlockComponentDescription {

    virtual ~BlockExplodeableDescription();
    virtual ~BlockExplodeableDescription();
    virtual void _ZNK27BlockExplodeableDescription7getNameB5cxx11Ev;
    virtual void initializeComponent(BlockLegacy &)const;
    virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const;
    virtual void isNetworkComponent(void)const;
    virtual void buildNetworkTag(void)const;
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&);
}
