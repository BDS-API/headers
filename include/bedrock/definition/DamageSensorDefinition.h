#pragma once

#include <memory>


class DamageSensorDefinition {

public:
    DamageSensorDefinition(); // _ZN22DamageSensorDefinitionC2Ev
    ~DamageSensorDefinition(); // _ZN22DamageSensorDefinitionD2Ev
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, DamageSensorDefinition>> &); // _ZN22DamageSensorDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void addDamageSensorTrigger(DamageSensorTrigger const&); // _ZN22DamageSensorDefinition22addDamageSensorTriggerERK19DamageSensorTrigger
    void initialize(EntityContext &, DamageSensorComponent &)const; // _ZNK22DamageSensorDefinition10initializeER13EntityContextR21DamageSensorComponent
    void uninitialize(EntityContext &, DamageSensorComponent &)const; // _ZNK22DamageSensorDefinition12uninitializeER13EntityContextR21DamageSensorComponent
    void deserializeData(Json::Value &); // _ZN22DamageSensorDefinition15deserializeDataERN4Json5ValueE
    void deserializeTrigger(Json::Value &); // _ZN22DamageSensorDefinition18deserializeTriggerERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK22DamageSensorDefinition13serializeDataERN4Json5ValueE
    void serializeTrigger(DamageSensorTrigger const&, Json::Value &)const; // _ZNK22DamageSensorDefinition16serializeTriggerERK19DamageSensorTriggerRN4Json5ValueE
};
