#pragma once

#include "BlockComponentDescription.h"
#include <string>


class BlockLightDescription : public BlockComponentDescription {

public:
    static std::string NameID;

    virtual ~BlockLightDescription(); // _ZN21BlockLightDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual std::string getName()const; // _ZNK21BlockLightDescription7getNameB5cxx11Ev
    virtual void initializeComponent(BlockLegacy &)const; // _ZNK21BlockLightDescription19initializeComponentER11BlockLegacy
    virtual void buildSchema__incomplete0(long &)const; //TODO: incomplete function definition // _ZNK21BlockLightDescription11buildSchemaERN8JsonUtil20JsonSchemaObjectNodeINS0_14JsonParseStateINS0_10EmptyClassE15BlockDefinitionEES4_EE
    virtual bool isNetworkComponent()const; // _ZNK21BlockLightDescription18isNetworkComponentEv
    virtual void buildNetworkTag()const; // _ZNK21BlockLightDescription15buildNetworkTagEv
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&); // _ZN21BlockLightDescription21initializeFromNetworkER11BlockLegacyRK11CompoundTag
    BlockLightDescription(); // _ZN21BlockLightDescriptionC2Ev
};
