#pragma once

#include <string>


class BlockComponentDescription {

public:
    virtual ~BlockComponentDescription(); // _ZN25BlockComponentDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual std::string getName()const; // _ZNK25BlockComponentDescription7getNameB5cxx11Ev
    virtual void initializeComponent(BlockLegacy &)const; // _ZNK25BlockComponentDescription19initializeComponentER11BlockLegacy
    virtual void buildSchema__incomplete0(long &)const; //TODO: incomplete function definition // _ZNK25BlockComponentDescription11buildSchemaERN8JsonUtil20JsonSchemaObjectNodeINS0_14JsonParseStateINS0_10EmptyClassE15BlockDefinitionEES4_EE
    virtual bool isNetworkComponent()const; // _ZNK25BlockComponentDescription18isNetworkComponentEv
    virtual void buildNetworkTag()const; // _ZNK25BlockComponentDescription15buildNetworkTagEv
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&); // _ZN25BlockComponentDescription21initializeFromNetworkER11BlockLegacyRK11CompoundTag
    BlockComponentDescription(); // _ZN25BlockComponentDescriptionC2Ev
};
