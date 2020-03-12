#pragma once

#include <string>
#include "BlockComponentDescription.h"


class BlockLightEmissionDescription : BlockComponentDescription {

public:
    static std::string NameID;

    virtual void buildNetworkTag()const;
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition
    virtual std::string getName()const;
    virtual void initializeComponent(BlockLegacy &)const;
    virtual bool isNetworkComponent()const;
    ~BlockLightEmissionDescription();
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&);
    BlockLightEmissionDescription();
};
