#pragma once

#include "../bedrock/actor/Actor.h"
#include "DataLoadHelper.h"
#include <string>
#include "../bedrock/nbt/CompoundTag.h"


class TagsComponent {

public:
//  void addAdditionalSaveData(CompoundTag &, gsl::span<std::string, -1l> const&); //TODO: incomplete function definition
//  void setTagSetID(IDType<TagSetIDType>); //TODO: incomplete function definition
    TagsComponent();
    void getTagSetID()const;
    TagsComponent(TagsComponent &&);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void initFromDefinition(Actor &);
};
