#pragma once

#include <memory>


namespace FlockingDefinition {

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, FlockingDefinition>> &); // _ZN18FlockingDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void initialize(EntityContext &, FlockingComponent &); // _ZN18FlockingDefinition10initializeER13EntityContextR17FlockingComponent
    void deserializeData(Json::Value &); // _ZN18FlockingDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK18FlockingDefinition13serializeDataERN4Json5ValueE
};
