#pragma once

#include <string>
#include "BlockComponentDescription.h"


class BlockDestroyTimeDescription : BlockComponentDescription {

public:
    static std::string NameID;

    ~BlockDestroyTimeDescription(); // _ZN27BlockDestroyTimeDescriptionD2Ev
    virtual std::string getName()const; // _ZNK27BlockDestroyTimeDescription7getNameB5cxx11Ev
    virtual void initializeComponent(BlockLegacy &)const; // _ZNK27BlockDestroyTimeDescription19initializeComponentER11BlockLegacy
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition // _ZNK27BlockDestroyTimeDescription11buildSchemaERN8JsonUtil20JsonSchemaObjectNodeINS0_14JsonParseStateINS0_10EmptyClassE15BlockDefinitionEES4_EE
    virtual bool isNetworkComponent()const; // _ZNK27BlockDestroyTimeDescription18isNetworkComponentEv
    virtual void buildNetworkTag()const; // _ZNK27BlockDestroyTimeDescription15buildNetworkTagEv
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&); // _ZN27BlockDestroyTimeDescription21initializeFromNetworkER11BlockLegacyRK11CompoundTag
    BlockDestroyTimeDescription(); // _ZN27BlockDestroyTimeDescriptionC2Ev
};
