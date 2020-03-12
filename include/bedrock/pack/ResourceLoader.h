#pragma once

#include <functional>
#include <vector>
#include <string>
#include "../../unmapped/ResourceLocation.h"


class ResourceLoader {

public:
    ~ResourceLoader();
    virtual void getPathContainingResource(ResourceLocation const&, std::vector<std::string>)const;
    virtual bool isInStreamableLocation(ResourceLocation const&, std::vector<std::string> const&)const;
    virtual std::string getPath(ResourceLocation const&)const;
    virtual bool isInStreamableLocation(ResourceLocation const&)const;
    virtual std::string getPathContainingResource(ResourceLocation const&)const;
    virtual void getPath(ResourceLocation const&, std::vector<std::string> const&)const;
//  ResourceLoader(std::function<Core::PathBuffer<std::string> (void)>); //TODO: incomplete function definition
};
