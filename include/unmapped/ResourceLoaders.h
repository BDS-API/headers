#pragma once

#include <string>
#include <memory>
#include <vector>


namespace ResourceLoaders {

    static long loaders;
    static long backCompatGroup;
    static std::string supportedImageExtensions;

    void clearLoaders(); // _ZN15ResourceLoaders12clearLoadersEv
//  void registerLoader(ResourceFileSystem, std::unique_ptr<ResourceLoader>); //TODO: incomplete function definition // _ZN15ResourceLoaders14registerLoaderE18ResourceFileSystemSt10unique_ptrI14ResourceLoaderSt14default_deleteIS2_EE
    void load(ResourceLocation const&, std::string &); // _ZN15ResourceLoaders4loadERK16ResourceLocationRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void load(ResourceLocation const&, std::string &, std::vector<std::string> const&); // _ZN15ResourceLoaders4loadERK16ResourceLocationRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIS8_SaIS8_EE
    std::string getPath(ResourceLocation const&); // _ZN15ResourceLoaders7getPathB5cxx11ERK16ResourceLocation
    std::string getPathContainingResource(ResourceLocation const&); // _ZN15ResourceLoaders25getPathContainingResourceB5cxx11ERK16ResourceLocation
};
