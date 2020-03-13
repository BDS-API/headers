#pragma once

#include <string>


class ResourceLocation {

public:
    ~ResourceLocation(); // _ZN16ResourceLocationD2Ev
    ResourceLocation(ResourceLocation const&); // _ZN16ResourceLocationC2ERKS_
    void operator==(ResourceLocation const&)const; // _ZNK16ResourceLocationeqERKS_
    ResourceLocation(ResourceLocation &&); // _ZN16ResourceLocationC2EOS_
    void hashCode()const; // _ZNK16ResourceLocation8hashCodeEv
    std::string getFileSystemName()const; // _ZNK16ResourceLocation17getFileSystemNameB5cxx11Ev
    ResourceLocation(); // _ZN16ResourceLocationC2Ev
    ResourceLocation(Core::Path const&); // _ZN16ResourceLocationC2ERKN4Core4PathE
    void _computeHashes(); // _ZN16ResourceLocation14_computeHashesEv
//  ResourceLocation(Core::Path const&, ResourceFileSystem); //TODO: incomplete function definition // _ZN16ResourceLocationC2ERKN4Core4PathE18ResourceFileSystem
    void serialize(Json::Value &)const; // _ZNK16ResourceLocation9serializeERN4Json5ValueE
    void deserialize(Json::Value const&); // _ZN16ResourceLocation11deserializeERKN4Json5ValueE
    std::string getFullPath()const; // _ZNK16ResourceLocation11getFullPathB5cxx11Ev
    std::string getRelativePath()const; // _ZNK16ResourceLocation15getRelativePathB5cxx11Ev
//  void setRelativePath(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition // _ZN16ResourceLocation15setRelativePathERKN4Core10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE
    void getHashedPath()const; // _ZNK16ResourceLocation13getHashedPathEv
};
