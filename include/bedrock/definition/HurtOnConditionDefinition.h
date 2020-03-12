#pragma once

#include <memory>


class HurtOnConditionDefinition {

public:
    ~HurtOnConditionDefinition();
    HurtOnConditionDefinition();
    void addDamageCondition(DamageCondition const&);
    void deserializeData(Json::Value &);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, HurtOnConditionDefinition>> &);
    void serializeData(Json::Value &)const;
};
