#pragma once

#include <memory>


class PeekDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, PeekDefinition>> &); // _ZN14PeekDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void deserializeData(Json::Value &); // _ZN14PeekDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK14PeekDefinition13serializeDataERN4Json5ValueE
    PeekDefinition(); // _ZN14PeekDefinitionC2Ev
    ~PeekDefinition(); // _ZN14PeekDefinitionD2Ev
};
