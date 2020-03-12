#pragma once

#include <memory>
#include "../../unmapped/EntityContext.h"
#include "../../json/Value.h"
#include "../../unmapped/RailMovementComponent.h"


class RailMovementDefinition {

public:
    void deserializeData(Json::Value &);
    void initialize(EntityContext &, RailMovementComponent &);
    void serializeData(Json::Value &)const;
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, RailMovementDefinition>> &); //TODO: incomplete function definition
};
