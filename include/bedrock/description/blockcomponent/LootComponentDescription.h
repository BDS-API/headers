#pragma once

#include <string>
#include "BlockComponentDescription.h"


class LootComponentDescription : BlockComponentDescription {

public:
    static std::string NameID;

    ~LootComponentDescription(); // _ZN24LootComponentDescriptionD2Ev
    virtual std::string getName()const; // _ZNK24LootComponentDescription7getNameB5cxx11Ev
    virtual void initializeComponent(BlockLegacy &)const; // _ZNK24LootComponentDescription19initializeComponentER11BlockLegacy
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition // _ZNK24LootComponentDescription11buildSchemaERN8JsonUtil20JsonSchemaObjectNodeINS0_14JsonParseStateINS0_10EmptyClassE15BlockDefinitionEES4_EE
    LootComponentDescription(); // _ZN24LootComponentDescriptionC2Ev
};
