#pragma once

class TagsComponent {

public:

    void TagsComponent(TagsComponent&&);
    void TagsComponent(void);
    void initFromDefinition(Actor &);
    void addAdditionalSaveData(CompoundTag &, gsl::span<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, -1l> const&);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void setTagSetID(IDType<TagSetIDType>);
    void getTagSetID(void)const;
};
