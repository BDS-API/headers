#pragma once

#include "../../unmapped/ExpressionNode.h"
#include "../../unmapped/ExperienceRewardComponent.h"
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "./ExperienceRewardDefinition.h"
#include "../../json/Value.h"


class ExperienceRewardDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ExperienceRewardDefinition>> &); //TODO: incomplete function definition
    void addBredExpressionNode(ExpressionNode const&);
    void addDeathExpressionNode(ExpressionNode const&);
    void initialize(EntityContext &, ExperienceRewardComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    ExperienceRewardDefinition();
    ~ExperienceRewardDefinition();
};
