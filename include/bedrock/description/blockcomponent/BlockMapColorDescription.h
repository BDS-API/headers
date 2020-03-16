#pragma once

#include "BlockComponentDescription.h"
#include <string>


class BlockMapColorDescription : public BlockComponentDescription {

public:
    static std::string NameID;

    virtual ~BlockMapColorDescription(); // _ZN24BlockMapColorDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual std::string getName()const; // _ZNK24BlockMapColorDescription7getNameB5cxx11Ev
    virtual void initializeComponent(BlockLegacy &)const; // _ZNK24BlockMapColorDescription19initializeComponentER11BlockLegacy
    virtual void buildSchema__incomplete0(long &)const; //TODO: incomplete function definition // _ZNK24BlockMapColorDescription11buildSchemaERN8JsonUtil20JsonSchemaObjectNodeINS0_14JsonParseStateINS0_10EmptyClassE15BlockDefinitionEES4_EE
    BlockMapColorDescription(); // _ZN24BlockMapColorDescriptionC2Ev
};
