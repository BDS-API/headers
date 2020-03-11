#pragma once

#include "../../definition/BlockDefinition.h"
#include "../../nbt/CompoundTag.h"
#include "./BlockComponentDescription.h"
#include "../../block/BlockLegacy.h"
#include <string>


class BlockFrictionDescription : BlockComponentDescription {

public:
    static std::string NameID;

    virtual ~BlockFrictionDescription();
    virtual std::string getName()const;
    virtual void initializeComponent(BlockLegacy &)const;
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition
    virtual bool isNetworkComponent()const;
    virtual void buildNetworkTag()const;
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&);

    BlockFrictionDescription();
};
