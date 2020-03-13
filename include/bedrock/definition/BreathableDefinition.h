#pragma once

#include <string>
#include <memory>


class BreathableDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BreathableDefinition>> &); // _ZN20BreathableDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void addBreathableBlockByName(std::string const&); // _ZN20BreathableDefinition24addBreathableBlockByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void addNonBreathableBlockByName(std::string const&); // _ZN20BreathableDefinition27addNonBreathableBlockByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void initialize(EntityContext &, BreathableComponent &); // _ZN20BreathableDefinition10initializeER13EntityContextR19BreathableComponent
    void deserializeData(Json::Value &); // _ZN20BreathableDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK20BreathableDefinition13serializeDataERN4Json5ValueE
    BreathableDefinition(); // _ZN20BreathableDefinitionC2Ev
    ~BreathableDefinition(); // _ZN20BreathableDefinitionD2Ev
};
