#pragma once

#include <string>
#include "BlockComponentDescription.h"


class BlockMapColorDescription : BlockComponentDescription {

public:
    static std::string NameID;

    ~BlockMapColorDescription(); // _ZN24BlockMapColorDescriptionD2Ev
    virtual std::string getName()const; // _ZNK24BlockMapColorDescription7getNameB5cxx11Ev
    virtual void initializeComponent(BlockLegacy &)const; // _ZNK24BlockMapColorDescription19initializeComponentER11BlockLegacy
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition // _ZNK24BlockMapColorDescription11buildSchemaERN8JsonUtil20JsonSchemaObjectNodeINS0_14JsonParseStateINS0_10EmptyClassE15BlockDefinitionEES4_EE
    BlockMapColorDescription(); // _ZN24BlockMapColorDescriptionC2Ev
};
