#pragma once

class ResourceLoaders {

public:
    static long ResourceLoaders::loaders;
    static long ResourceLoaders::backCompatGroup;


    void clearLoaders(void);
    void registerLoader(ResourceFileSystem, std::unique_ptr<ResourceLoader, std::default_delete<ResourceLoader>>);
    void load(ResourceLocation const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    void load(ResourceLocation const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
};
