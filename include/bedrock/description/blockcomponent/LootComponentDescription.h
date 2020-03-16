#pragma once

#include "BlockComponentDescription.h"
#include <string>


class LootComponentDescription : public BlockComponentDescription {

public:
    static std::string NameID;

    virtual ~LootComponentDescription(); // _ZN24LootComponentDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual std::string getName()const; // _ZNK24LootComponentDescription7getNameB5cxx11Ev
    virtual void initializeComponent(BlockLegacy &)const; // _ZNK24LootComponentDescription19initializeComponentER11BlockLegacy
    virtual void buildSchema__incomplete0(long &)const; //TODO: incomplete function definition // _ZNK24LootComponentDescription11buildSchemaERN8JsonUtil20JsonSchemaObjectNodeINS0_14JsonParseStateINS0_10EmptyClassE15BlockDefinitionEES4_EE
    LootComponentDescription(); // _ZN24LootComponentDescriptionC2Ev
};
