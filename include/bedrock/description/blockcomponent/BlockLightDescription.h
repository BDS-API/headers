#pragma once

#include <string>
#include "BlockComponentDescription.h"


class BlockLightDescription : BlockComponentDescription {

public:
    static std::string NameID;

    virtual std::string getName()const;
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&);
    virtual void buildNetworkTag()const;
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition
    virtual void initializeComponent(BlockLegacy &)const;
    ~BlockLightDescription();
    virtual bool isNetworkComponent()const;
    BlockLightDescription();
};
