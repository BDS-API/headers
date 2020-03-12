#pragma once

#include "../../unmapped/EntityContext.h"
#include "../../unmapped/DamageOverTimeComponent.h"
#include "../../json/Value.h"
#include <memory>


class DamageOverTimeDefinition {

public:
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, DamageOverTimeDefinition>> &); //TODO: incomplete function definition
    void deserializeData(Json::Value &);
    void initialize(EntityContext &, DamageOverTimeComponent &);
    void serializeData(Json::Value &)const;
};
