#pragma once

#include <string>
#include "BlockComponentDescription.h"


class BlockFlammableDescription : BlockComponentDescription {

public:
    static std::string NameID;

    ~BlockFlammableDescription(); // _ZN25BlockFlammableDescriptionD2Ev
    virtual std::string getName()const; // _ZNK25BlockFlammableDescription7getNameB5cxx11Ev
    virtual void initializeComponent(BlockLegacy &)const; // _ZNK25BlockFlammableDescription19initializeComponentER11BlockLegacy
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition // _ZNK25BlockFlammableDescription11buildSchemaERN8JsonUtil20JsonSchemaObjectNodeINS0_14JsonParseStateINS0_10EmptyClassE15BlockDefinitionEES4_EE
    BlockFlammableDescription(); // _ZN25BlockFlammableDescriptionC2Ev
};
