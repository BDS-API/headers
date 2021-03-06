#pragma once

#include "BlockComponentDescription.h"
#include <string>


class BlockLightEmissionDescription : public BlockComponentDescription {

public:
    static std::string NameID;

    virtual ~BlockLightEmissionDescription(); // _ZN29BlockLightEmissionDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual std::string getName()const; // _ZNK29BlockLightEmissionDescription7getNameB5cxx11Ev
    virtual void initializeComponent(BlockLegacy &)const; // _ZNK29BlockLightEmissionDescription19initializeComponentER11BlockLegacy
    virtual void buildSchema__incomplete0(long &)const; //TODO: incomplete function definition // _ZNK29BlockLightEmissionDescription11buildSchemaERN8JsonUtil20JsonSchemaObjectNodeINS0_14JsonParseStateINS0_10EmptyClassE15BlockDefinitionEES4_EE
    virtual bool isNetworkComponent()const; // _ZNK29BlockLightEmissionDescription18isNetworkComponentEv
    virtual void buildNetworkTag()const; // _ZNK29BlockLightEmissionDescription15buildNetworkTagEv
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&); // _ZN29BlockLightEmissionDescription21initializeFromNetworkER11BlockLegacyRK11CompoundTag
    BlockLightEmissionDescription(); // _ZN29BlockLightEmissionDescriptionC2Ev
};
