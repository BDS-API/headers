#pragma once

class BlockFrictionDescription : BlockComponentDescription {

    virtual void BlockFrictionDescription::~BlockFrictionDescription();
    virtual void BlockFrictionDescription::~BlockFrictionDescription();
    virtual void _ZNK24BlockFrictionDescription7getNameB5cxx11Ev;
    virtual void initializeComponent(BlockLegacy &)const;
    virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const;
    virtual void isNetworkComponent(void)const;
    virtual void buildNetworkTag(void)const;
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&);
}
