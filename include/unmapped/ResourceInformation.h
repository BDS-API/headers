#pragma once

#include <string>
#include "SemVersion.h"
#include "../mce/UUID.h"
#include "PackIdVersion.h"


class ResourceInformation {

public:
//  ResourceInformation(std::string const&, SemVersion const&, mce::UUID const&, ResourceInformation::ResourceType, std::string const&); //TODO: incomplete function definition
    void satisfies(PackIdVersion const&)const;
    ~ResourceInformation();
//  std::string StringFromResourceType(ResourceInformation::ResourceType); //TODO: incomplete function definition
    void ResourceTypeFromString(std::string const&);
    ResourceInformation(std::string const&, SemVersion const&, mce::UUID const&, std::string const&, std::string const&);
    ResourceInformation(ResourceInformation const&);
};
