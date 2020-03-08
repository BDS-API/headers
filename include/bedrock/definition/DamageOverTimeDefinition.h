#pragma once

#include "../../unmapped/DamageOverTimeComponent"
#include "../../json/Value"
#include "../../unmapped/EntityContext"


class DamageOverTimeDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, DamageOverTimeDefinition>> &);
    void initialize(EntityContext &, DamageOverTimeComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
