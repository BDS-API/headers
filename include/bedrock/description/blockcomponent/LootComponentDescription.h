#pragma once

#include <string>
#include "../../definition/BlockDefinition.h"
#include "../../block/BlockLegacy.h"
#include "BlockComponentDescription.h"


class LootComponentDescription : BlockComponentDescription {

public:
    static std::string NameID;

//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition
    virtual std::string getName()const;
    virtual void initializeComponent(BlockLegacy &)const;
    ~LootComponentDescription();
    LootComponentDescription();
};
