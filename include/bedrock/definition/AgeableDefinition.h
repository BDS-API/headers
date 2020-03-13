#pragma once

#include <string>
#include <memory>


class AgeableDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AgeableDefinition>> &); // _ZN17AgeableDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void addFeedItemByName(std::string const&); // _ZN17AgeableDefinition17addFeedItemByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void addDropItemByName(std::string const&); // _ZN17AgeableDefinition17addDropItemByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void initialize(EntityContext &, AgeableComponent &); // _ZN17AgeableDefinition10initializeER13EntityContextR16AgeableComponent
    bool canGrowUp()const; // _ZNK17AgeableDefinition9canGrowUpEv
    void getTicksAsBaby()const; // _ZNK17AgeableDefinition14getTicksAsBabyEv
    void deserializeData(Json::Value &); // _ZN17AgeableDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK17AgeableDefinition13serializeDataERN4Json5ValueE
    AgeableDefinition(); // _ZN17AgeableDefinitionC2Ev
    ~AgeableDefinition(); // _ZN17AgeableDefinitionD2Ev
};
