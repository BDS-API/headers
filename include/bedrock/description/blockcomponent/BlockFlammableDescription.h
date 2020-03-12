#pragma once

#include <string>
#include "../../definition/BlockDefinition.h"
#include "../../block/BlockLegacy.h"
#include "BlockComponentDescription.h"


class BlockFlammableDescription : BlockComponentDescription {

public:
    static std::string NameID;

    virtual void initializeComponent(BlockLegacy &)const;
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition
    virtual std::string getName()const;
    ~BlockFlammableDescription();
    BlockFlammableDescription();
};
