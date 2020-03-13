#pragma once

#include <memory>


class LeashableDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LeashableDefinition>> &); // _ZN19LeashableDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void deserializeData(Json::Value &); // _ZN19LeashableDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK19LeashableDefinition13serializeDataERN4Json5ValueE
    LeashableDefinition(); // _ZN19LeashableDefinitionC2Ev
    ~LeashableDefinition(); // _ZN19LeashableDefinitionD2Ev
};
