#pragma once

#include <string>


class ResourceInformation {

public:
    ResourceInformation(ResourceInformation const&); // _ZN19ResourceInformationC2ERKS_
    ~ResourceInformation(); // _ZN19ResourceInformationD2Ev
//  std::string StringFromResourceType(ResourceInformation::ResourceType); //TODO: incomplete function definition // _ZN19ResourceInformation22StringFromResourceTypeB5cxx11ENS_12ResourceTypeE
    void ResourceTypeFromString(std::string const&); // _ZN19ResourceInformation22ResourceTypeFromStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ResourceInformation(std::string const&, SemVersion const&, mce::UUID const&, std::string const&, std::string const&); // _ZN19ResourceInformationC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK10SemVersionRKN3mce4UUIDES7_S7_
//  ResourceInformation(std::string const&, SemVersion const&, mce::UUID const&, ResourceInformation::ResourceType, std::string const&); //TODO: incomplete function definition // _ZN19ResourceInformationC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK10SemVersionRKN3mce4UUIDENS_12ResourceTypeES7_
    void satisfies(PackIdVersion const&)const; // _ZNK19ResourceInformation9satisfiesERK13PackIdVersion
};
