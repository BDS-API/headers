#pragma once

class BlockMapColorDescription : BlockComponentDescription {

    virtual void BlockMapColorDescription::~BlockMapColorDescription();
    virtual void BlockMapColorDescription::~BlockMapColorDescription();
    virtual void _ZNK24BlockMapColorDescription7getNameB5cxx11Ev;
    virtual void initializeComponent(BlockLegacy &)const;
    virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const;
    virtual void isNetworkComponent(void)const;
    virtual void buildNetworkTag(void)const;
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&);
}
