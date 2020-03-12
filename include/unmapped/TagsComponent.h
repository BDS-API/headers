#pragma once



class TagsComponent {

public:
    void initFromDefinition(Actor &);
    void getTagSetID()const;
    TagsComponent(TagsComponent &&);
//  void setTagSetID(IDType<TagSetIDType>); //TODO: incomplete function definition
//  void addAdditionalSaveData(CompoundTag &, gsl::span<std::string, -1l> const&); //TODO: incomplete function definition
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    TagsComponent();
};
