#pragma once

#include <memory>


class GiveableDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GiveableDefinition>> &); // _ZN18GiveableDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void addGiveableTrigger(GiveableTrigger const&); // _ZN18GiveableDefinition18addGiveableTriggerERK15GiveableTrigger
    void initialize(EntityContext &, GiveableComponent &); // _ZN18GiveableDefinition10initializeER13EntityContextR17GiveableComponent
    void deserializeData(Json::Value &); // _ZN18GiveableDefinition15deserializeDataERN4Json5ValueE
    void _parseGiveableTriggers(Json::Value &); // _ZN18GiveableDefinition22_parseGiveableTriggersERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK18GiveableDefinition13serializeDataERN4Json5ValueE
    GiveableDefinition(); // _ZN18GiveableDefinitionC2Ev
    ~GiveableDefinition(); // _ZN18GiveableDefinitionD2Ev
};
