#pragma once

#include "../../unmapped/EnvironmentRequirement.h"
#include "../../unmapped/BreedableComponent.h"
#include <string>
#include "../../unmapped/BreedableType.h"
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "./BreedableDefinition.h"
#include "../../json/Value.h"


class BreedableDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BreedableDefinition>> &); //TODO: incomplete function definition
    void addBreedItemByName(std::string const&);
    void addEnvironmentRequirement(EnvironmentRequirement const&);
    void addBreedableType(BreedableType const&);
    void initialize(EntityContext &, BreedableComponent &);
    void deserializeData(Json::Value &);
    void _parseEnvironmentRequirements(Json::Value);
    void _parseBreedTypes(Json::Value);
    void serializeData(Json::Value &)const;
    BreedableDefinition();
    ~BreedableDefinition();
};
