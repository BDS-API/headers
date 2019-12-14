#pragma once

class ResourceLoaders {

public:
    static long ResourceLoaders::loaders;
    static long ResourceLoaders::backCompatGroup;


    void clearLoaders(void);
    void registerLoader(ResourceFileSystem, std::unique_ptr<ResourceLoader, std::default_delete<ResourceLoader>>);
    void load(ResourceLocation const&, std::string &);
    void load(ResourceLocation const&, std::string &, std::vector<std::string, std::allocator<std::string>> const&);
};
