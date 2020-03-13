#pragma once

#include <memory>


class SchedulerDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, SchedulerDefinition>> &); // _ZN19SchedulerDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void setMinDelayTicks(float const&); // _ZN19SchedulerDefinition16setMinDelayTicksERKf
    void setMaxDelayTicks(float const&); // _ZN19SchedulerDefinition16setMaxDelayTicksERKf
    void initialize(EntityContext &, SchedulerComponent &); // _ZN19SchedulerDefinition10initializeER13EntityContextR18SchedulerComponent
    void serializeData(Json::Value &)const; // _ZNK19SchedulerDefinition13serializeDataERN4Json5ValueE
    void deserializeData(Json::Value &); // _ZN19SchedulerDefinition15deserializeDataERN4Json5ValueE
    void parseSchedule(Json::Value &); // _ZN19SchedulerDefinition13parseScheduleERN4Json5ValueE
    SchedulerDefinition(); // _ZN19SchedulerDefinitionC2Ev
    ~SchedulerDefinition(); // _ZN19SchedulerDefinitionD2Ev
};
