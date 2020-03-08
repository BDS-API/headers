#pragma once

#include "../json/Value"
#include "../core/Path"


class ResourceLocation {

public:

    ResourceLocation(ResourceLocation const&);
    ResourceLocation(ResourceLocation&&);
    void hashCode()const;
    ResourceLocation(void);
    ResourceLocation(Core::Path const&);
    void _computeHashes();
    ResourceLocation(Core::Path const&, ResourceFileSystem);
    void serialize(Json::Value &)const;
    void deserialize(Json::Value const&);
    void setRelativePath(Core::PathBuffer<std::string> const&);
    void getHashedPath()const;
};
