#pragma once

class TagsComponent {

public:

    void TagsComponent(TagsComponent&&);
    void TagsComponent(void);
    void initFromDefinition(Actor &);
    void addAdditionalSaveData(CompoundTag &, gsl::span<std::string, -1l> const&);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void setTagSetID(IDType<TagSetIDType>);
    void getTagSetID(void)const;
};
