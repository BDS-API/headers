#pragma once

#include <memory>


namespace InsomniaDefinition {

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, InsomniaDefinition>> &); // _ZN18InsomniaDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void initialize(EntityContext &, InsomniaComponent &); // _ZN18InsomniaDefinition10initializeER13EntityContextR17InsomniaComponent
    void deserializeData(Json::Value &); // _ZN18InsomniaDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK18InsomniaDefinition13serializeDataERN4Json5ValueE
};
