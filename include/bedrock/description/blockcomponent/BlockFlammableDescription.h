#pragma once

#include <string>
#include "BlockComponentDescription.h"


class BlockFlammableDescription : BlockComponentDescription {

public:
    static std::string NameID;

    ~BlockFlammableDescription();
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition
    virtual void initializeComponent(BlockLegacy &)const;
    virtual std::string getName()const;
    BlockFlammableDescription();
};
