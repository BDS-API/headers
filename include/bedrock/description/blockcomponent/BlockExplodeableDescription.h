#pragma once

#include <string>
#include "BlockComponentDescription.h"


class BlockExplodeableDescription : BlockComponentDescription {

public:
    static std::string NameID;

    virtual void initializeComponent(BlockLegacy &)const;
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition
    ~BlockExplodeableDescription();
    virtual std::string getName()const;
    BlockExplodeableDescription();
};
