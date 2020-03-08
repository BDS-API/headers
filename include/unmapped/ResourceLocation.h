#pragma once

#include "../core/Path"
#include "../json/Value"


class ResourceLocation {

public:

    ResourceLocation(ResourceLocation const&);
    ResourceLocation(ResourceLocation&&);
    void hashCode(void)const;
    ResourceLocation(void);
    ResourceLocation(Core::Path const&);
    void _computeHashes(void);
    ResourceLocation(Core::Path const&, ResourceFileSystem);
    void serialize(Json::Value &)const;
    void deserialize(Json::Value const&);
    void setRelativePath(Core::PathBuffer<std::string> const&);
    void getHashedPath(void)const;
};
