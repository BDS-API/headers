#pragma once

#include <string>


class EntityComponentFactory {

public:
    void removeComponents(EntityContext &, DefinitionInstanceGroup const&);
    EntityComponentFactory();
    void addComponents(EntityContext &, Json::Value const&, bool);
    void tryGetDefinitionSerializer(std::string const&);
    ~EntityComponentFactory();
    void removeComponents(EntityContext &, Json::Value const&, bool);
    void addComponents(EntityContext &, DefinitionInstanceGroup const&);
    void serializeComponentDefinitions(DefinitionInstanceGroup &, Json::Value const&, bool);
};
