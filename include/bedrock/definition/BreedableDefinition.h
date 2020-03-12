#pragma once

#include <string>
#include <memory>
#include "../../json/Value.h"


class BreedableDefinition {

public:
    void _parseBreedTypes(Json::Value);
    void initialize(EntityContext &, BreedableComponent &);
    void addBreedItemByName(std::string const&);
    void addEnvironmentRequirement(EnvironmentRequirement const&);
    BreedableDefinition();
    ~BreedableDefinition();
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BreedableDefinition>> &);
    void addBreedableType(BreedableType const&);
    void _parseEnvironmentRequirements(Json::Value);
};
