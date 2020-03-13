#pragma once

#include <memory>


class AddRiderDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AddRiderDefinition>> &); // _ZN18AddRiderDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void initialize(EntityContext &, AddRiderComponent &); // _ZN18AddRiderDefinition10initializeER13EntityContextR17AddRiderComponent
    void deserializeData(Json::Value &); // _ZN18AddRiderDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK18AddRiderDefinition13serializeDataERN4Json5ValueE
    AddRiderDefinition(); // _ZN18AddRiderDefinitionC2Ev
    ~AddRiderDefinition(); // _ZN18AddRiderDefinitionD2Ev
};
