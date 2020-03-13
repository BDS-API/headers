#pragma once

#include <string>
#include "BlockComponentDescription.h"


class BlockExplodeableDescription : BlockComponentDescription {

public:
    static std::string NameID;

    ~BlockExplodeableDescription(); // _ZN27BlockExplodeableDescriptionD2Ev
    virtual std::string getName()const; // _ZNK27BlockExplodeableDescription7getNameB5cxx11Ev
    virtual void initializeComponent(BlockLegacy &)const; // _ZNK27BlockExplodeableDescription19initializeComponentER11BlockLegacy
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition // _ZNK27BlockExplodeableDescription11buildSchemaERN8JsonUtil20JsonSchemaObjectNodeINS0_14JsonParseStateINS0_10EmptyClassE15BlockDefinitionEES4_EE
    BlockExplodeableDescription(); // _ZN27BlockExplodeableDescriptionC2Ev
};
