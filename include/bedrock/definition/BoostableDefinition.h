#pragma once

#include <memory>


class BoostableDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BoostableDefinition>> &); // _ZN19BoostableDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void initialize(EntityContext &, BoostableComponent &); // _ZN19BoostableDefinition10initializeER13EntityContextR18BoostableComponent
    void deserializeData(Json::Value &); // _ZN19BoostableDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK19BoostableDefinition13serializeDataERN4Json5ValueE
    BoostableDefinition(); // _ZN19BoostableDefinitionC2Ev
    ~BoostableDefinition(); // _ZN19BoostableDefinitionD2Ev
};
