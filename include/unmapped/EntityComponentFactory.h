#pragma once

#include "../bedrock/definition/DefinitionInstanceGroup"
#include "../json/Value"


class EntityComponentFactory {

public:

    EntityComponentFactory(void);
    void tryGetDefinitionSerializer(std::string const&);
    void serializeComponentDefinitions(DefinitionInstanceGroup &, Json::Value const&, bool);
    void addComponents(EntityContext &, DefinitionInstanceGroup const&);
    void removeComponents(EntityContext &, DefinitionInstanceGroup const&);
    void addComponents(EntityContext &, Json::Value const&, bool);
    void removeComponents(EntityContext &, Json::Value const&, bool);
};
