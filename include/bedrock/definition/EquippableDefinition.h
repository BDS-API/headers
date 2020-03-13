#pragma once

#include <memory>


class EquippableDefinition {

public:
    EquippableDefinition(); // _ZN20EquippableDefinitionC2Ev
    ~EquippableDefinition(); // _ZN20EquippableDefinitionD2Ev
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EquippableDefinition>> &); // _ZN20EquippableDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void initialize(EntityContext &, EquippableComponent &); // _ZN20EquippableDefinition10initializeER13EntityContextR19EquippableComponent
    void deserializeData(Json::Value &); // _ZN20EquippableDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK20EquippableDefinition13serializeDataERN4Json5ValueE
};
