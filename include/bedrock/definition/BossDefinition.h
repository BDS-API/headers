#pragma once

#include <memory>


class BossDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BossDefinition>> &); // _ZN14BossDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void initialize(EntityContext &, BossComponent &); // _ZN14BossDefinition10initializeER13EntityContextR13BossComponent
    void deserializeData(Json::Value &); // _ZN14BossDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK14BossDefinition13serializeDataERN4Json5ValueE
    BossDefinition(); // _ZN14BossDefinitionC2Ev
    ~BossDefinition(); // _ZN14BossDefinitionD2Ev
};
