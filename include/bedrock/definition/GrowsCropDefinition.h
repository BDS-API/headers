#pragma once

#include <memory>


namespace GrowsCropDefinition {

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GrowsCropDefinition>> &); // _ZN19GrowsCropDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void initialize(EntityContext &, GrowsCropComponent &); // _ZN19GrowsCropDefinition10initializeER13EntityContextR18GrowsCropComponent
    void deserializeData(Json::Value &); // _ZN19GrowsCropDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK19GrowsCropDefinition13serializeDataERN4Json5ValueE
};
