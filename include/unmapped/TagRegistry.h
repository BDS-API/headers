#pragma once

#include <string>
#include <vector>


class TagRegistry {

public:
    TagRegistry(TagRegistry const&); // _ZN11TagRegistryC2ERKS_
    TagRegistry(); // _ZN11TagRegistryC2Ev
    void getTagSetID(std::vector<IDType<TagIDType>> const&); // _ZN11TagRegistry11getTagSetIDERKSt6vectorI6IDTypeI9TagIDTypeESaIS3_EE
    ~TagRegistry(); // _ZN11TagRegistryD2Ev
    void tryGetTagID(std::string const&)const; // _ZNK11TagRegistry11tryGetTagIDERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  std::string getTag(IDType<TagIDType>); //TODO: incomplete function definition // _ZN11TagRegistry6getTagB5cxx11E6IDTypeI9TagIDTypeE
    void getTagSetID(IndexSet const&); // _ZN11TagRegistry11getTagSetIDERK8IndexSet
    void getEmptyTagSetID()const; // _ZNK11TagRegistry16getEmptyTagSetIDEv
//  void tagContainedInSet(IDType<TagIDType>, IDType<TagSetIDType>)const; //TODO: incomplete function definition // _ZNK11TagRegistry17tagContainedInSetE6IDTypeI9TagIDTypeES0_I12TagSetIDTypeE
//  void _getSet(IDType<TagSetIDType>)const; //TODO: incomplete function definition // _ZNK11TagRegistry7_getSetE6IDTypeI12TagSetIDTypeE
//  void filterAdmitsSet(RegisteredTagFilter, IDType<TagSetIDType>)const; //TODO: incomplete function definition // _ZNK11TagRegistry15filterAdmitsSetE19RegisteredTagFilter6IDTypeI12TagSetIDTypeE
    std::string getTags(); // _ZN11TagRegistry7getTagsB5cxx11Ev
    void acquireTag(std::string const&); // _ZN11TagRegistry10acquireTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  std::string getTag(IDType<TagIDType>)const; //TODO: incomplete function definition // _ZNK11TagRegistry6getTagB5cxx11E6IDTypeI9TagIDTypeE
//  void addTagToSet(std::string const&, IDType<TagSetIDType> const&); //TODO: incomplete function definition // _ZN11TagRegistry11addTagToSetERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK6IDTypeI12TagSetIDTypeE
//  void addTagToSet(IDType<TagIDType>, IDType const&); //TODO: incomplete function definition // _ZN11TagRegistry11addTagToSetE6IDTypeI9TagIDTypeERKS0_I12TagSetIDTypeE
//  void removeTagFromSet(IDType<TagIDType>, IDType const&); //TODO: incomplete function definition // _ZN11TagRegistry16removeTagFromSetE6IDTypeI9TagIDTypeERKS0_I12TagSetIDTypeE
//  void removeTagFromSet(std::string const&, IDType<TagSetIDType> const&); //TODO: incomplete function definition // _ZN11TagRegistry16removeTagFromSetERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK6IDTypeI12TagSetIDTypeE
//  bool setsIntersect(IDType<TagSetIDType>, IDType<TagSetIDType>)const; //TODO: incomplete function definition // _ZNK11TagRegistry13setsIntersectE6IDTypeI12TagSetIDTypeES2_
//  std::string getTagsInSet(IDType<TagSetIDType>); //TODO: incomplete function definition // _ZN11TagRegistry12getTagsInSetB5cxx11E6IDTypeI12TagSetIDTypeE
//  void getTagIDsInSet(IDType<TagSetIDType>); //TODO: incomplete function definition // _ZN11TagRegistry14getTagIDsInSetE6IDTypeI12TagSetIDTypeE
};
