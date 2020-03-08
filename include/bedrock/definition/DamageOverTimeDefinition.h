#pragma once

#include "../../json/Value"
#include "../../unmapped/EntityContext"
#include "../../unmapped/DamageOverTimeComponent"


class DamageOverTimeDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, DamageOverTimeDefinition>> &);
    void initialize(EntityContext &, DamageOverTimeComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
