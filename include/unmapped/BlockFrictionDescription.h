#pragma once

class BlockFrictionDescription : BlockComponentDescription {

public:
    static long NameID[abi:cxx11];

    virtual BlockFrictionDescription::~BlockFrictionDescription();
    virtual void getName[abi:cxx11](void)const;
    virtual void initializeComponent(BlockLegacy &)const;
    virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const;
    virtual bool isNetworkComponent(void)const;
    virtual void buildNetworkTag(void)const;
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&);

    BlockFrictionDescription(void);
};
