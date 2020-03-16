#pragma once

#include "BlockComponentDescription.h"
#include <string>


class BlockFlammableDescription : public BlockComponentDescription {

public:
    static std::string NameID;

    virtual ~BlockFlammableDescription(); // _ZN25BlockFlammableDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual std::string getName()const; // _ZNK25BlockFlammableDescription7getNameB5cxx11Ev
    virtual void initializeComponent(BlockLegacy &)const; // _ZNK25BlockFlammableDescription19initializeComponentER11BlockLegacy
    virtual void buildSchema__incomplete0(long &)const; //TODO: incomplete function definition // _ZNK25BlockFlammableDescription11buildSchemaERN8JsonUtil20JsonSchemaObjectNodeINS0_14JsonParseStateINS0_10EmptyClassE15BlockDefinitionEES4_EE
    BlockFlammableDescription(); // _ZN25BlockFlammableDescriptionC2Ev
};
