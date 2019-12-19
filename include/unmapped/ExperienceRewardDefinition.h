#pragma once

class ExperienceRewardDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ExperienceRewardDefinition>> &);
    void addBredExpressionNode(ExpressionNode const&);
    void addDeathExpressionNode(ExpressionNode const&);
    void initialize(EntityContext &, ExperienceRewardComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    ExperienceRewardDefinition(void);
};
