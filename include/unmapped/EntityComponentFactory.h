#pragma once

#include "../bedrock/definition/DefinitionInstanceGroup.h"
#include "../json/Value.h"
#include "./EntityContext.h"
#include <string>


class EntityComponentFactory {

public:

    EntityComponentFactory();
    ~EntityComponentFactory();
    void tryGetDefinitionSerializer(std::string const&);
    void serializeComponentDefinitions(DefinitionInstanceGroup &, Json::Value const&, bool);
    void addComponents(EntityContext &, DefinitionInstanceGroup const&);
    void removeComponents(EntityContext &, DefinitionInstanceGroup const&);
    void addComponents(EntityContext &, Json::Value const&, bool);
    void removeComponents(EntityContext &, Json::Value const&, bool);
};
