#pragma once

#include <string>


class ResourceLocation {

public:
//  void setRelativePath(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition
    void hashCode()const;
    void operator==(ResourceLocation const&)const;
    ResourceLocation(ResourceLocation &&);
    void deserialize(Json::Value const&);
    ResourceLocation(ResourceLocation const&);
    void serialize(Json::Value &)const;
    ResourceLocation();
//  ResourceLocation(Core::Path const&, ResourceFileSystem); //TODO: incomplete function definition
    void getHashedPath()const;
    void _computeHashes();
    std::string getRelativePath()const;
    ~ResourceLocation();
    std::string getFileSystemName()const;
    std::string getFullPath()const;
    ResourceLocation(Core::Path const&);
};
