#pragma once

#include "../../unmapped/ResourceLocation"


class ResourceLoader {

public:
    virtual ResourceLoader::~ResourceLoader()
    virtual bool isInStreamableLocation(ResourceLocation const&)const;
    virtual bool isInStreamableLocation(ResourceLocation const&, std::vector<std::string, std::allocator<std::string>> const&)const;
    virtual void getPath(ResourceLocation const&)const;
    virtual void getPath(ResourceLocation const&, std::vector<std::string, std::allocator<std::string>> const&)const;
    virtual void getPathContainingResource(ResourceLocation const&)const;
    virtual void getPathContainingResource(ResourceLocation const&, std::vector<std::string, std::allocator<std::string>>)const;

    ResourceLoader(std::function<Core::PathBuffer<std::string> ()(void)>);
};
