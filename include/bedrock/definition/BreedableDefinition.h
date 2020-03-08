#pragma once

#include "../../unmapped/EntityContext"
#include "../../unmapped/BreedableType"
#include "../../unmapped/EnvironmentRequirement"
#include "../../json/Value"


class BreedableDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BreedableDefinition>> &);
    void addBreedItemByName(std::string const&);
    void addEnvironmentRequirement(EnvironmentRequirement const&);
    void addBreedableType(BreedableType const&);
    void initialize(EntityContext &, BreedableComponent &);
    void deserializeData(Json::Value &);
    void _parseEnvironmentRequirements(Json::Value);
    void _parseBreedTypes(Json::Value);
    void serializeData(Json::Value &)const;
    BreedableDefinition(void);
};
