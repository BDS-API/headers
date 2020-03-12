#pragma once

#include <string>
#include "../../definition/BlockDefinition.h"
#include "../../nbt/CompoundTag.h"
#include "../../block/BlockLegacy.h"
#include "BlockComponentDescription.h"


class BlockLightDescription : BlockComponentDescription {

public:
    static std::string NameID;

    virtual bool isNetworkComponent()const;
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&);
    ~BlockLightDescription();
    virtual void initializeComponent(BlockLegacy &)const;
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition
    virtual void buildNetworkTag()const;
    virtual std::string getName()const;
    BlockLightDescription();
};
