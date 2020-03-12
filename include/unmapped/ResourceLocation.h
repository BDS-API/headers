#pragma once

#include "../core/Path.h"
#include <string>
#include "../json/Value.h"


class ResourceLocation {

public:
    std::string getFileSystemName()const;
    void hashCode()const;
    ResourceLocation(Core::Path const&);
    void _computeHashes();
    std::string getRelativePath()const;
    void deserialize(Json::Value const&);
    ResourceLocation(ResourceLocation &&);
    void operator==(ResourceLocation const&)const;
//  ResourceLocation(Core::Path const&, ResourceFileSystem); //TODO: incomplete function definition
    std::string getFullPath()const;
    ResourceLocation(ResourceLocation const&);
//  void setRelativePath(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition
    void serialize(Json::Value &)const;
    void getHashedPath()const;
    ResourceLocation();
    ~ResourceLocation();
};
