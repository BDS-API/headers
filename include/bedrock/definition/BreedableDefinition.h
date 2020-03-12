#pragma once

#include "../../unmapped/BreedableComponent.h"
#include "../../unmapped/BreedableType.h"
#include <string>
#include "../../unmapped/EnvironmentRequirement.h"
#include "../../json/Value.h"
#include <memory>
#include "../../unmapped/EntityContext.h"


class BreedableDefinition {

public:
    void _parseBreedTypes(Json::Value);
    void serializeData(Json::Value &)const;
    void addBreedableType(BreedableType const&);
    ~BreedableDefinition();
    void addEnvironmentRequirement(EnvironmentRequirement const&);
    void deserializeData(Json::Value &);
    void initialize(EntityContext &, BreedableComponent &);
    void _parseEnvironmentRequirements(Json::Value);
    void addBreedItemByName(std::string const&);
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BreedableDefinition>> &); //TODO: incomplete function definition
    BreedableDefinition();
};
