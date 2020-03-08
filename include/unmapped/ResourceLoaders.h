#pragma once

#include "../bedrock/pack/ResourceLoader"


class ResourceLoaders {

public:
    static long loaders;
    static long backCompatGroup;
    static long supportedImageExtensions[abi:cxx11];


    void clearLoaders();
    void registerLoader(ResourceFileSystem, std::unique_ptr<ResourceLoader, std::default_delete<ResourceLoader>>);
    void load(ResourceLocation const&, std::string &);
    void load(ResourceLocation const&, std::string &, std::vector<std::string, std::allocator<std::string>> const&);
};
