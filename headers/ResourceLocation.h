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
    void setRelativePath(Core::PathBuffer<std::string> const&);
    void getHashedPath(void)const;
};
