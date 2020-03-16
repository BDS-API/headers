#pragma once

#include "BlockComponentDescription.h"
#include <string>


class BlockExplodeableDescription : public BlockComponentDescription {

public:
    static std::string NameID;

    virtual ~BlockExplodeableDescription(); // _ZN27BlockExplodeableDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual std::string getName()const; // _ZNK27BlockExplodeableDescription7getNameB5cxx11Ev
    virtual void initializeComponent(BlockLegacy &)const; // _ZNK27BlockExplodeableDescription19initializeComponentER11BlockLegacy
    virtual void buildSchema__incomplete0(long &)const; //TODO: incomplete function definition // _ZNK27BlockExplodeableDescription11buildSchemaERN8JsonUtil20JsonSchemaObjectNodeINS0_14JsonParseStateINS0_10EmptyClassE15BlockDefinitionEES4_EE
    BlockExplodeableDescription(); // _ZN27BlockExplodeableDescriptionC2Ev
};
