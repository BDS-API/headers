#pragma once

#include <string>
#include <memory>


class BribeableDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BribeableDefinition>> &); // _ZN19BribeableDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void addBribeItemByName(std::string const&); // _ZN19BribeableDefinition18addBribeItemByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void initialize(EntityContext &, BribeableComponent &); // _ZN19BribeableDefinition10initializeER13EntityContextR18BribeableComponent
    void deserializeData(Json::Value &); // _ZN19BribeableDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK19BribeableDefinition13serializeDataERN4Json5ValueE
    BribeableDefinition(); // _ZN19BribeableDefinitionC2Ev
    ~BribeableDefinition(); // _ZN19BribeableDefinitionD2Ev
};
