#pragma once

class ResourceLocation {

public:

    void ResourceLocation(ResourceLocation const&);
    void ResourceLocation(ResourceLocation&&);
    void hashCode(void)const;
    void ResourceLocation(void);
    void ResourceLocation(Core::Path const&);
    void _computeHashes(void);
    void ResourceLocation(Core::Path const&, ResourceFileSystem);
    void serialize(Json::Value &)const;
    void deserialize(Json::Value const&);
    void setRelativePath(Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>> const&);
    void getHashedPath(void)const;
};
