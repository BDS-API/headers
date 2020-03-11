#pragma once

#include <memory>
#include "./ResourceLocation.h"
#include <vector>
#include "../bedrock/pack/ResourceLoader.h"
#include <string>


class ResourceLoaders {

public:
    static long loaders;
    static long backCompatGroup;
    static std::string supportedImageExtensions;


    void clearLoaders();
//  void registerLoader(ResourceFileSystem, std::unique_ptr<ResourceLoader, std::default_delete<ResourceLoader>>); //TODO: incomplete function definition
    void load(ResourceLocation const&, std::string &);
    void load(ResourceLocation const&, std::string &, std::vector<std::string, std::allocator<std::string>> const&);
    std::string getPath(ResourceLocation const&);
    std::string getPathContainingResource(ResourceLocation const&);
};
