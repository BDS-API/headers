#pragma once

#include <memory>


namespace DamageOverTimeDefinition {

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, DamageOverTimeDefinition>> &); // _ZN24DamageOverTimeDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void initialize(EntityContext &, DamageOverTimeComponent &); // _ZN24DamageOverTimeDefinition10initializeER13EntityContextR23DamageOverTimeComponent
    void deserializeData(Json::Value &); // _ZN24DamageOverTimeDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK24DamageOverTimeDefinition13serializeDataERN4Json5ValueE
};
