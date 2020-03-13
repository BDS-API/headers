#pragma once

#include <string>
#include <memory>


class MobEffectDefinition {

public:
    MobEffectDefinition(); // _ZN19MobEffectDefinitionC2Ev
    ~MobEffectDefinition(); // _ZN19MobEffectDefinitionD2Ev
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, MobEffectDefinition>> &); // _ZN19MobEffectDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void setMobEffectByName(std::string const&); // _ZN19MobEffectDefinition18setMobEffectByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setEffectTimeInTicks(int const&); // _ZN19MobEffectDefinition20setEffectTimeInTicksERKi
    void initialize(EntityContext &, MobEffectComponent &); // _ZN19MobEffectDefinition10initializeER13EntityContextR18MobEffectComponent
    void deserializeData(Json::Value &); // _ZN19MobEffectDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK19MobEffectDefinition13serializeDataERN4Json5ValueE
};
