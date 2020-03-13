#pragma once

#include <string>
#include <memory>


class ShareableDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ShareableDefinition>> &); // _ZN19ShareableDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void addShareableByName(std::string const&); // _ZN19ShareableDefinition18addShareableByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void addShareable(Shareable const&); // _ZN19ShareableDefinition12addShareableERK9Shareable
    void deserializeData(Json::Value &); // _ZN19ShareableDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK19ShareableDefinition13serializeDataERN4Json5ValueE
    ShareableDefinition(); // _ZN19ShareableDefinitionC2Ev
    ~ShareableDefinition(); // _ZN19ShareableDefinitionD2Ev
};
