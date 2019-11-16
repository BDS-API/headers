#pragma once

class ResourcePackManager : ResourceLoader {

    virtual void ~ResourcePackManager();
    virtual void ~ResourcePackManager();
    virtual void load(ResourceLocation const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void load(ResourceLocation const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&)const;
    virtual void loadAllVersionsOf(ResourceLocation const&)const;
    virtual void isInStreamableLocation(ResourceLocation const&)const;
    virtual void isInStreamableLocation(ResourceLocation const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&)const;
    virtual void _ZNK19ResourcePackManager7getPathB5cxx11ERK16ResourceLocation;
    virtual void getPath(ResourceLocation const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&)const;
    virtual void _ZNK19ResourcePackManager25getPathContainingResourceB5cxx11ERK16ResourceLocation;
    virtual void getPathContainingResource(ResourceLocation const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>)const;
    virtual void hasCapability(gsl::basic_string_span<char const, -1l>)const;
}
