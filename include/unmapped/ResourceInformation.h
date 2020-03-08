#pragma once

#include "../mce/UUID"


class ResourceInformation {

public:

    ResourceInformation(ResourceInformation const&);
    void ResourceTypeFromString(std::string const&);
    ResourceInformation(std::string const&, SemVersion const&, mce::UUID const&, std::string const&, std::string const&);
    ResourceInformation(std::string const&, SemVersion const&, mce::UUID const&, ResourceInformation::ResourceType, std::string const&);
    void satisfies(PackIdVersion const&)const;
};
