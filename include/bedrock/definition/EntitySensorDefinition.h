#pragma once

#include <memory>


class EntitySensorDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EntitySensorDefinition>> &); // _ZN22EntitySensorDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void initialize(EntityContext &, EntitySensorComponent &); // _ZN22EntitySensorDefinition10initializeER13EntityContextR21EntitySensorComponent
    EntitySensorDefinition(); // _ZN22EntitySensorDefinitionC2Ev
    ~EntitySensorDefinition(); // _ZN22EntitySensorDefinitionD2Ev
};
