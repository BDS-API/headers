#pragma once

class ResourceInformation {

public:

    void ResourceInformation(ResourceInformation const&);
    void ResourceTypeFromString(std::string const&);
    void ResourceInformation(std::string const&, SemVersion const&, mce::UUID const&, std::string const&, std::string const&);
    void ResourceInformation(std::string const&, SemVersion const&, mce::UUID const&, ResourceInformation::ResourceType, std::string const&);
    void satisfies(PackIdVersion const&)const;
};
