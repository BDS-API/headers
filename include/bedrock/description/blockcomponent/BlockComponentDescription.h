#pragma once

#include <string>


class BlockComponentDescription {

public:
    virtual bool isNetworkComponent()const;
    virtual void initializeComponent(BlockLegacy &)const;
    virtual std::string getName()const;
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&);
    ~BlockComponentDescription();
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition
    virtual void buildNetworkTag()const;
    BlockComponentDescription();
};
