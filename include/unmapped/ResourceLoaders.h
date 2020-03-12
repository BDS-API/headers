#pragma once

#include "../bedrock/pack/ResourceLoader.h"
#include <string>
#include <vector>
#include <memory>
#include "ResourceLocation.h"


namespace ResourceLoaders {

    static long loaders;
    static long backCompatGroup;
    static std::string supportedImageExtensions;

    void load(ResourceLocation const&, std::string &);
//  void registerLoader(ResourceFileSystem, std::unique_ptr<ResourceLoader>); //TODO: incomplete function definition
    void clearLoaders();
    std::string getPathContainingResource(ResourceLocation const&);
    std::string getPath(ResourceLocation const&);
    void load(ResourceLocation const&, std::string &, std::vector<std::string> const&);
};
