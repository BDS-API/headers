#pragma once

#include <string>
#include <vector>
#include <functional>


class ResourceLoader {

public:
    virtual void getPath(ResourceLocation const&, std::vector<std::string> const&)const;
    ~ResourceLoader();
    virtual void getPathContainingResource(ResourceLocation const&, std::vector<std::string>)const;
    virtual std::string getPathContainingResource(ResourceLocation const&)const;
    virtual bool isInStreamableLocation(ResourceLocation const&, std::vector<std::string> const&)const;
    virtual bool isInStreamableLocation(ResourceLocation const&)const;
    virtual std::string getPath(ResourceLocation const&)const;
//  ResourceLoader(std::function<Core::PathBuffer<std::string> (void)>); //TODO: incomplete function definition
};
