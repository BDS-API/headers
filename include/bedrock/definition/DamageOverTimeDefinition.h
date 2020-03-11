#pragma once

#include "./DamageOverTimeDefinition.h"
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "../../unmapped/DamageOverTimeComponent.h"
#include "../../json/Value.h"


class DamageOverTimeDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, DamageOverTimeDefinition>> &); //TODO: incomplete function definition
    void initialize(EntityContext &, DamageOverTimeComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
