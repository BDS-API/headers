#pragma once

#include <string>
#include <memory>
#include <vector>


namespace ResourceLoaders {

    static long loaders;
    static long backCompatGroup;
    static std::string supportedImageExtensions;

    std::string getPathContainingResource(ResourceLocation const&);
    void clearLoaders();
    void load(ResourceLocation const&, std::string &);
    std::string getPath(ResourceLocation const&);
    void load(ResourceLocation const&, std::string &, std::vector<std::string> const&);
//  void registerLoader(ResourceFileSystem, std::unique_ptr<ResourceLoader>); //TODO: incomplete function definition
};
