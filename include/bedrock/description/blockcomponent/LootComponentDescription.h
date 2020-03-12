#pragma once

#include <string>
#include "BlockComponentDescription.h"


class LootComponentDescription : BlockComponentDescription {

public:
    static std::string NameID;

    ~LootComponentDescription();
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition
    virtual void initializeComponent(BlockLegacy &)const;
    virtual std::string getName()const;
    LootComponentDescription();
};
