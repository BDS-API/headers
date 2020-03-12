#pragma once

#include <memory>


class ExperienceRewardDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ExperienceRewardDefinition>> &);
    void initialize(EntityContext &, ExperienceRewardComponent &);
    ~ExperienceRewardDefinition();
    ExperienceRewardDefinition();
    void addBredExpressionNode(ExpressionNode const&);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    void addDeathExpressionNode(ExpressionNode const&);
};
