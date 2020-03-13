#pragma once

#include <string>
#include <memory>


class MountTameableDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, MountTameableDefinition>> &); // _ZN23MountTameableDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void initialize(EntityContext &, MountTamingComponent &); // _ZN23MountTameableDefinition10initializeER13EntityContextR20MountTamingComponent
    void deserializeData(Json::Value &); // _ZN23MountTameableDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK23MountTameableDefinition13serializeDataERN4Json5ValueE
    void addAutoRejectItemByName(std::string const&); // _ZN23MountTameableDefinition23addAutoRejectItemByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    MountTameableDefinition(); // _ZN23MountTameableDefinitionC2Ev
    ~MountTameableDefinition(); // _ZN23MountTameableDefinitionD2Ev
};
