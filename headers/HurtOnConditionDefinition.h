#pragma once

class HurtOnConditionDefinition {

public:

    void HurtOnConditionDefinition(void);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, HurtOnConditionDefinition>> &);
    void addDamageCondition(DamageCondition const&);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
