#pragma once

#include "BlockComponentDescription.h"
#include <string>


class BlockFrictionDescription : public BlockComponentDescription {

public:
    static std::string NameID;

    virtual ~BlockFrictionDescription(); // _ZN24BlockFrictionDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual std::string getName()const; // _ZNK24BlockFrictionDescription7getNameB5cxx11Ev
    virtual void initializeComponent(BlockLegacy &)const; // _ZNK24BlockFrictionDescription19initializeComponentER11BlockLegacy
    virtual void buildSchema__incomplete0(long &)const; //TODO: incomplete function definition // _ZNK24BlockFrictionDescription11buildSchemaERN8JsonUtil20JsonSchemaObjectNodeINS0_14JsonParseStateINS0_10EmptyClassE15BlockDefinitionEES4_EE
    virtual bool isNetworkComponent()const; // _ZNK24BlockFrictionDescription18isNetworkComponentEv
    virtual void buildNetworkTag()const; // _ZNK24BlockFrictionDescription15buildNetworkTagEv
    virtual void initializeFromNetwork(BlockLegacy &, CompoundTag const&); // _ZN24BlockFrictionDescription21initializeFromNetworkER11BlockLegacyRK11CompoundTag
    BlockFrictionDescription(); // _ZN24BlockFrictionDescriptionC2Ev
};
