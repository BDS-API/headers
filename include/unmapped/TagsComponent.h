#pragma once



class TagsComponent {

public:
    TagsComponent(TagsComponent &&); // _ZN13TagsComponentC2EOS_
    TagsComponent(); // _ZN13TagsComponentC2Ev
    void initFromDefinition(Actor &); // _ZN13TagsComponent18initFromDefinitionER5Actor
//  void addAdditionalSaveData(CompoundTag &, gsl::span<std::string, -1l> const&); //TODO: incomplete function definition // _ZN13TagsComponent21addAdditionalSaveDataER11CompoundTagRKN3gsl4spanINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELln1EEE
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN13TagsComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
//  void setTagSetID(IDType<TagSetIDType>); //TODO: incomplete function definition // _ZN13TagsComponent11setTagSetIDE6IDTypeI12TagSetIDTypeE
    void getTagSetID()const; // _ZNK13TagsComponent11getTagSetIDEv
};
