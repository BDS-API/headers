#pragma once

#include <string>
#include "../../definition/BlockDefinition.h"
#include "../../nbt/CompoundTag.h"
#include "../../block/BlockLegacy.h"
#include "BlockComponentDescription.h"


class BlockDestroyTimeDescription : BlockComponentDescription {

public:
    static std::string NameID;

    virtual bool isNetworkComponent()const;
    ~BlockDestroyTimeDescription();
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&);
    virtual std::string getName()const;
    virtual void initializeComponent(BlockLegacy &)const;
    virtual void buildNetworkTag()const;
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition
    BlockDestroyTimeDescription();
};
