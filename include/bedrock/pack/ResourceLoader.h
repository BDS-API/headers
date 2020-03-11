#pragma once

#include <memory>
#include <vector>
#include "../../unmapped/ResourceLocation.h"
#include <functional>
#include <string>


class ResourceLoader {

public:
    virtual ~ResourceLoader();
    virtual bool isInStreamableLocation(ResourceLocation const&)const;
    virtual bool isInStreamableLocation(ResourceLocation const&, std::vector<std::string, std::allocator<std::string>> const&)const;
    virtual std::string getPath(ResourceLocation const&)const;
    virtual void getPath(ResourceLocation const&, std::vector<std::string, std::allocator<std::string>> const&)const;
    virtual std::string getPathContainingResource(ResourceLocation const&)const;
    virtual void getPathContainingResource(ResourceLocation const&, std::vector<std::string, std::allocator<std::string>>)const;

//  ResourceLoader(std::function<Core::PathBuffer<std::string> (void)>); //TODO: incomplete function definition
};
