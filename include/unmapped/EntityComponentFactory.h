#pragma once

#include "../bedrock/definition/DefinitionInstanceGroup.h"
#include "../json/Value.h"
#include <string>
#include "EntityContext.h"


class EntityComponentFactory {

public:
    ~EntityComponentFactory();
    EntityComponentFactory();
    void removeComponents(EntityContext &, Json::Value const&, bool);
    void addComponents(EntityContext &, DefinitionInstanceGroup const&);
    void serializeComponentDefinitions(DefinitionInstanceGroup &, Json::Value const&, bool);
    void removeComponents(EntityContext &, DefinitionInstanceGroup const&);
    void tryGetDefinitionSerializer(std::string const&);
    void addComponents(EntityContext &, Json::Value const&, bool);
};
