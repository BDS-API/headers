#pragma once

#include <memory>


class ExperienceRewardDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ExperienceRewardDefinition>> &); // _ZN26ExperienceRewardDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void addBredExpressionNode(ExpressionNode const&); // _ZN26ExperienceRewardDefinition21addBredExpressionNodeERK14ExpressionNode
    void addDeathExpressionNode(ExpressionNode const&); // _ZN26ExperienceRewardDefinition22addDeathExpressionNodeERK14ExpressionNode
    void initialize(EntityContext &, ExperienceRewardComponent &); // _ZN26ExperienceRewardDefinition10initializeER13EntityContextR25ExperienceRewardComponent
    void deserializeData(Json::Value &); // _ZN26ExperienceRewardDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK26ExperienceRewardDefinition13serializeDataERN4Json5ValueE
    ExperienceRewardDefinition(); // _ZN26ExperienceRewardDefinitionC2Ev
    ~ExperienceRewardDefinition(); // _ZN26ExperienceRewardDefinitionD2Ev
};
