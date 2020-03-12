#pragma once

#include <string>
#include "../../definition/BlockDefinition.h"
#include "../../nbt/CompoundTag.h"
#include "../../block/BlockLegacy.h"
#include "BlockComponentDescription.h"


class BlockFrictionDescription : BlockComponentDescription {

public:
    static std::string NameID;

    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&);
    ~BlockFrictionDescription();
    virtual void initializeComponent(BlockLegacy &)const;
    virtual bool isNetworkComponent()const;
    virtual void buildNetworkTag()const;
    virtual std::string getName()const;
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition
    BlockFrictionDescription();
};
