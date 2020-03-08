#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/nbt/CompoundTag"


class TagsComponent {

public:

    TagsComponent(TagsComponent&&);
    TagsComponent(void);
    void initFromDefinition(Actor &);
    void addAdditionalSaveData(CompoundTag &, gsl::span<std::string, -1l> const&);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void setTagSetID(IDType<TagSetIDType>);
    void getTagSetID()const;
};
