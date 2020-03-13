#pragma once

#include <memory>


namespace RailMovementDefinition {

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, RailMovementDefinition>> &); // _ZN22RailMovementDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void initialize(EntityContext &, RailMovementComponent &); // _ZN22RailMovementDefinition10initializeER13EntityContextR21RailMovementComponent
    void deserializeData(Json::Value &); // _ZN22RailMovementDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK22RailMovementDefinition13serializeDataERN4Json5ValueE
};
