#pragma once

#include <memory>


namespace DamageOverTimeDefinition {

    void initialize(EntityContext &, DamageOverTimeComponent &);
    void serializeData(Json::Value &)const;
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, DamageOverTimeDefinition>> &);
    void deserializeData(Json::Value &);
};
