#pragma once

#include <string>
#include "BlockComponentDescription.h"


class BlockFrictionDescription : BlockComponentDescription {

public:
    static std::string NameID;

    virtual std::string getName()const;
    ~BlockFrictionDescription();
    virtual bool isNetworkComponent()const;
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition
    virtual void initializeComponent(BlockLegacy &)const;
    virtual void buildNetworkTag()const;
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&);
    BlockFrictionDescription();
};
