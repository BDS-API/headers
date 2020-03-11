#pragma once

#include "./DataLoadHelper.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "./TagsComponent.h"
#include "../bedrock/actor/Actor.h"
#include <string>


class TagsComponent {

public:

    TagsComponent(TagsComponent &&);
    TagsComponent();
    void initFromDefinition(Actor &);
//  void addAdditionalSaveData(CompoundTag &, gsl::span<std::string, -1l> const&); //TODO: incomplete function definition
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
//  void setTagSetID(IDType<TagSetIDType>); //TODO: incomplete function definition
    void getTagSetID()const;
};
