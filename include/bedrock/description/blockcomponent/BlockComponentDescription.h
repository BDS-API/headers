#pragma once

#include <string>


class BlockComponentDescription {

public:
    ~BlockComponentDescription(); // _ZN25BlockComponentDescriptionD2Ev
    virtual std::string getName()const; // _ZNK25BlockComponentDescription7getNameB5cxx11Ev
    virtual void initializeComponent(BlockLegacy &)const; // _ZNK25BlockComponentDescription19initializeComponentER11BlockLegacy
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition // _ZNK25BlockComponentDescription11buildSchemaERN8JsonUtil20JsonSchemaObjectNodeINS0_14JsonParseStateINS0_10EmptyClassE15BlockDefinitionEES4_EE
    virtual bool isNetworkComponent()const; // _ZNK25BlockComponentDescription18isNetworkComponentEv
    virtual void buildNetworkTag()const; // _ZNK25BlockComponentDescription15buildNetworkTagEv
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&); // _ZN25BlockComponentDescription21initializeFromNetworkER11BlockLegacyRK11CompoundTag
    BlockComponentDescription(); // _ZN25BlockComponentDescriptionC2Ev
};
