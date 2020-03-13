#pragma once

#include <string>
#include <memory>


class HealableDefinition {

public:
    HealableDefinition(); // _ZN18HealableDefinitionC2Ev
    ~HealableDefinition(); // _ZN18HealableDefinitionD2Ev
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, HealableDefinition>> &); // _ZN18HealableDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void addFeedItem(FeedItem const&); // _ZN18HealableDefinition11addFeedItemERK8FeedItem
    void addFeedItemByName(std::string const&); // _ZN18HealableDefinition17addFeedItemByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void deserializeData(Json::Value &); // _ZN18HealableDefinition15deserializeDataERN4Json5ValueE
    void _loadEffects(FeedItem &, Json::Value &); // _ZN18HealableDefinition12_loadEffectsER8FeedItemRN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK18HealableDefinition13serializeDataERN4Json5ValueE
};
