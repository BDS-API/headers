#pragma once

#include <string>
#include <memory>


class AreaAttackDefinition {

public:
    AreaAttackDefinition(); // _ZN20AreaAttackDefinitionC2Ev
    ~AreaAttackDefinition(); // _ZN20AreaAttackDefinitionD2Ev
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AreaAttackDefinition>> &); // _ZN20AreaAttackDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void setDamageCause(std::string const&); // _ZN20AreaAttackDefinition14setDamageCauseERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void initialize(EntityContext &, AreaAttackComponent &); // _ZN20AreaAttackDefinition10initializeER13EntityContextR19AreaAttackComponent
    void deserializeData(Json::Value &); // _ZN20AreaAttackDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK20AreaAttackDefinition13serializeDataERN4Json5ValueE
};
