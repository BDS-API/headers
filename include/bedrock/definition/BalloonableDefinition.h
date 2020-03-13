#pragma once

#include <memory>


class BalloonableDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BalloonableDefinition>> &); // _ZN21BalloonableDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void deserializeData(Json::Value &); // _ZN21BalloonableDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK21BalloonableDefinition13serializeDataERN4Json5ValueE
    BalloonableDefinition(); // _ZN21BalloonableDefinitionC2Ev
    ~BalloonableDefinition(); // _ZN21BalloonableDefinitionD2Ev
};
