#pragma once

#include "../../unmapped/DamageCondition.h"
#include "./HurtOnConditionDefinition.h"
#include <memory>
#include "../../json/Value.h"


class HurtOnConditionDefinition {

public:

    HurtOnConditionDefinition();
    ~HurtOnConditionDefinition();
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, HurtOnConditionDefinition>> &); //TODO: incomplete function definition
    void addDamageCondition(DamageCondition const&);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
