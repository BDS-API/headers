#pragma once

#include <memory>


class LegacyTradeableDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LegacyTradeableDefinition>> &); // _ZN25LegacyTradeableDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void initialize(EntityContext &, LegacyTradeableComponent &); // _ZN25LegacyTradeableDefinition10initializeER13EntityContextR24LegacyTradeableComponent
    void deserializeData(Json::Value &); // _ZN25LegacyTradeableDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK25LegacyTradeableDefinition13serializeDataERN4Json5ValueE
    LegacyTradeableDefinition(); // _ZN25LegacyTradeableDefinitionC2Ev
    ~LegacyTradeableDefinition(); // _ZN25LegacyTradeableDefinitionD2Ev
};
