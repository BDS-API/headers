#pragma once

#include <memory>


class PhysicsDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, PhysicsDefinition>> &); // _ZN17PhysicsDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void initialize(EntityContext &, PhysicsComponent &); // _ZN17PhysicsDefinition10initializeER13EntityContextR16PhysicsComponent
    void deserializeData(Json::Value &); // _ZN17PhysicsDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK17PhysicsDefinition13serializeDataERN4Json5ValueE
    PhysicsDefinition(); // _ZN17PhysicsDefinitionC2Ev
};
