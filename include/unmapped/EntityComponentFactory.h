#pragma once

#include <string>


class EntityComponentFactory {

public:
    EntityComponentFactory(); // _ZN22EntityComponentFactoryC2Ev
    ~EntityComponentFactory(); // _ZN22EntityComponentFactoryD2Ev
    void tryGetDefinitionSerializer(std::string const&); // _ZN22EntityComponentFactory26tryGetDefinitionSerializerERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void serializeComponentDefinitions(DefinitionInstanceGroup &, Json::Value const&, bool); // _ZN22EntityComponentFactory29serializeComponentDefinitionsER23DefinitionInstanceGroupRKN4Json5ValueEb
    void addComponents(EntityContext &, DefinitionInstanceGroup const&); // _ZN22EntityComponentFactory13addComponentsER13EntityContextRK23DefinitionInstanceGroup
    void removeComponents(EntityContext &, DefinitionInstanceGroup const&); // _ZN22EntityComponentFactory16removeComponentsER13EntityContextRK23DefinitionInstanceGroup
    void addComponents(EntityContext &, Json::Value const&, bool); // _ZN22EntityComponentFactory13addComponentsER13EntityContextRKN4Json5ValueEb
    void removeComponents(EntityContext &, Json::Value const&, bool); // _ZN22EntityComponentFactory16removeComponentsER13EntityContextRKN4Json5ValueEb
};
