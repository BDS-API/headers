#pragma once

#include <memory>


class EnvironmentSensorDefinition {

public:
    EnvironmentSensorDefinition(); // _ZN27EnvironmentSensorDefinitionC2Ev
    ~EnvironmentSensorDefinition(); // _ZN27EnvironmentSensorDefinitionD2Ev
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EnvironmentSensorDefinition>> &); // _ZN27EnvironmentSensorDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void addEnvironmentTrigger(DefinitionTrigger const&); // _ZN27EnvironmentSensorDefinition21addEnvironmentTriggerERK17DefinitionTrigger
    void deserializeData(Json::Value &); // _ZN27EnvironmentSensorDefinition15deserializeDataERN4Json5ValueE
    void parseEnvironment(Json::Value &); // _ZN27EnvironmentSensorDefinition16parseEnvironmentERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK27EnvironmentSensorDefinition13serializeDataERN4Json5ValueE
};
