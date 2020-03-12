#pragma once

#include "../../json/Value.h"
#include "../../unmapped/ExpressionNode.h"
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "../../unmapped/ExperienceRewardComponent.h"


class ExperienceRewardDefinition {

public:
    void addDeathExpressionNode(ExpressionNode const&);
    void addBredExpressionNode(ExpressionNode const&);
    void serializeData(Json::Value &)const;
    ~ExperienceRewardDefinition();
    void initialize(EntityContext &, ExperienceRewardComponent &);
    void deserializeData(Json::Value &);
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ExperienceRewardDefinition>> &); //TODO: incomplete function definition
    ExperienceRewardDefinition();
};
