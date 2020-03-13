#pragma once

#include <memory>


class LookAtDefinition {

public:
    LookAtDefinition(); // _ZN16LookAtDefinitionC2Ev
    ~LookAtDefinition(); // _ZN16LookAtDefinitionD2Ev
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LookAtDefinition>> &); // _ZN16LookAtDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void initialize(EntityContext &, LookAtComponent &)const; // _ZNK16LookAtDefinition10initializeER13EntityContextR15LookAtComponent
    void deserializeData(Json::Value &); // _ZN16LookAtDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK16LookAtDefinition13serializeDataERN4Json5ValueE
};
