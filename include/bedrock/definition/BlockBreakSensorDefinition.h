#pragma once

#include <memory>


class BlockBreakSensorDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BlockBreakSensorDefinition>> &); // _ZN26BlockBreakSensorDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void initialize(EntityContext &, BlockBreakSensorComponent &); // _ZN26BlockBreakSensorDefinition10initializeER13EntityContextR25BlockBreakSensorComponent
    BlockBreakSensorDefinition(); // _ZN26BlockBreakSensorDefinitionC2Ev
    ~BlockBreakSensorDefinition(); // _ZN26BlockBreakSensorDefinitionD2Ev
};
