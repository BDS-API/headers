#pragma once

#include <memory>


namespace ScaleByAgeDefinition {

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ScaleByAgeDefinition>> &); // _ZN20ScaleByAgeDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void initialize(EntityContext &, ScaleByAgeComponent &); // _ZN20ScaleByAgeDefinition10initializeER13EntityContextR19ScaleByAgeComponent
    void deserializeData(Json::Value &); // _ZN20ScaleByAgeDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK20ScaleByAgeDefinition13serializeDataERN4Json5ValueE
};
