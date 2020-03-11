#pragma once

#include "../core/Path.h"
#include <string>
#include "./ResourceLocation.h"
#include "../json/Value.h"


class ResourceLocation {

public:

    ~ResourceLocation();
    ResourceLocation(ResourceLocation const&);
    void operator==(ResourceLocation const&)const;
    ResourceLocation(ResourceLocation &&);
    void hashCode()const;
    std::string getFileSystemName()const;
    ResourceLocation();
    ResourceLocation(Core::Path const&);
    void _computeHashes();
//  ResourceLocation(Core::Path const&, ResourceFileSystem); //TODO: incomplete function definition
    void serialize(Json::Value &)const;
    void deserialize(Json::Value const&);
    std::string getFullPath()const;
    std::string getRelativePath()const;
//  void setRelativePath(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition
    void getHashedPath()const;
};
