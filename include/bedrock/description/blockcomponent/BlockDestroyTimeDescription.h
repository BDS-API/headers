#pragma once

#include <string>
#include "BlockComponentDescription.h"


class BlockDestroyTimeDescription : BlockComponentDescription {

public:
    static std::string NameID;

    virtual void buildNetworkTag()const;
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&);
    virtual bool isNetworkComponent()const;
    virtual void initializeComponent(BlockLegacy &)const;
    virtual std::string getName()const;
    ~BlockDestroyTimeDescription();
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition
    BlockDestroyTimeDescription();
};
