#pragma once

#include <string>
#include <memory>
#include "../../json/Value.h"


class BreedableDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BreedableDefinition>> &); // _ZN19BreedableDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void addBreedItemByName(std::string const&); // _ZN19BreedableDefinition18addBreedItemByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void addEnvironmentRequirement(EnvironmentRequirement const&); // _ZN19BreedableDefinition25addEnvironmentRequirementERK22EnvironmentRequirement
    void addBreedableType(BreedableType const&); // _ZN19BreedableDefinition16addBreedableTypeERK13BreedableType
    void initialize(EntityContext &, BreedableComponent &); // _ZN19BreedableDefinition10initializeER13EntityContextR18BreedableComponent
    void deserializeData(Json::Value &); // _ZN19BreedableDefinition15deserializeDataERN4Json5ValueE
    void _parseEnvironmentRequirements(Json::Value); // _ZN19BreedableDefinition29_parseEnvironmentRequirementsEN4Json5ValueE
    void _parseBreedTypes(Json::Value); // _ZN19BreedableDefinition16_parseBreedTypesEN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK19BreedableDefinition13serializeDataERN4Json5ValueE
    BreedableDefinition(); // _ZN19BreedableDefinitionC2Ev
    ~BreedableDefinition(); // _ZN19BreedableDefinitionD2Ev
};
