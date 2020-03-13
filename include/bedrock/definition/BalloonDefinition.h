#pragma once

#include <memory>


class BalloonDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BalloonDefinition>> &); // _ZN17BalloonDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void deserializeData(Json::Value &); // _ZN17BalloonDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK17BalloonDefinition13serializeDataERN4Json5ValueE
    BalloonDefinition(); // _ZN17BalloonDefinitionC2Ev
};
