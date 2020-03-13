#pragma once

#include <string>
#include <functional>
#include <vector>


class ResourceLoader {

public:
    ~ResourceLoader(); // _ZN14ResourceLoaderD2Ev
    virtual bool isInStreamableLocation(ResourceLocation const&)const; // _ZNK14ResourceLoader22isInStreamableLocationERK16ResourceLocation
    virtual bool isInStreamableLocation(ResourceLocation const&, std::vector<std::string> const&)const; // _ZNK14ResourceLoader22isInStreamableLocationERK16ResourceLocationRKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS9_EE
    virtual std::string getPath(ResourceLocation const&)const; // _ZNK14ResourceLoader7getPathB5cxx11ERK16ResourceLocation
    virtual void getPath(ResourceLocation const&, std::vector<std::string> const&)const; // _ZNK14ResourceLoader7getPathERK16ResourceLocationRKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS9_EE
    virtual std::string getPathContainingResource(ResourceLocation const&)const; // _ZNK14ResourceLoader25getPathContainingResourceB5cxx11ERK16ResourceLocation
    virtual void getPathContainingResource(ResourceLocation const&, std::vector<std::string>)const; // _ZNK14ResourceLoader25getPathContainingResourceERK16ResourceLocationSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS9_EE
//  ResourceLoader(std::function<Core::PathBuffer<std::string> (void)>); //TODO: incomplete function definition // _ZN14ResourceLoaderC2ESt8functionIFN4Core10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEvEE
};
