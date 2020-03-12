#pragma once

#include "../../json/Value.h"
#include "../../unmapped/DamageCondition.h"
#include <memory>


class HurtOnConditionDefinition {

public:
    ~HurtOnConditionDefinition();
    void addDamageCondition(DamageCondition const&);
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, HurtOnConditionDefinition>> &); //TODO: incomplete function definition
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    HurtOnConditionDefinition();
};
