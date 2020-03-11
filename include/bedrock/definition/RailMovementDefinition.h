#pragma once

#include <memory>
#include "../../unmapped/RailMovementComponent.h"
#include "../../unmapped/EntityContext.h"
#include "./RailMovementDefinition.h"
#include "../../json/Value.h"


class RailMovementDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, RailMovementDefinition>> &); //TODO: incomplete function definition
    void initialize(EntityContext &, RailMovementComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
