#pragma once

#include <string>
#include "BlockComponentDescription.h"


class BlockMapColorDescription : BlockComponentDescription {

public:
    static std::string NameID;

    virtual void initializeComponent(BlockLegacy &)const;
    ~BlockMapColorDescription();
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition
    virtual std::string getName()const;
    BlockMapColorDescription();
};
