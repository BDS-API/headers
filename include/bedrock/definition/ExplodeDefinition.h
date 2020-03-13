#pragma once

#include <memory>


class ExplodeDefinition {

public:
    ExplodeDefinition(); // _ZN17ExplodeDefinitionC2Ev
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ExplodeDefinition>> &); // _ZN17ExplodeDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void initialize(EntityContext &, ExplodeComponent &)const; // _ZNK17ExplodeDefinition10initializeER13EntityContextR16ExplodeComponent
    void deserializeData(Json::Value &); // _ZN17ExplodeDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK17ExplodeDefinition13serializeDataERN4Json5ValueE
};
