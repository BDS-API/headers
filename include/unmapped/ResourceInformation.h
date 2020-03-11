#pragma once

#include "../mce/UUID.h"
#include "./SemVersion.h"
#include "./PackIdVersion.h"
#include "./ResourceInformation.h"
#include <string>


class ResourceInformation {

public:

    ResourceInformation(ResourceInformation const&);
    ~ResourceInformation();
//  std::string StringFromResourceType(ResourceInformation::ResourceType); //TODO: incomplete function definition
    void ResourceTypeFromString(std::string const&);
    ResourceInformation(std::string const&, SemVersion const&, mce::UUID const&, std::string const&, std::string const&);
//  ResourceInformation(std::string const&, SemVersion const&, mce::UUID const&, ResourceInformation::ResourceType, std::string const&); //TODO: incomplete function definition
    void satisfies(PackIdVersion const&)const;
};
