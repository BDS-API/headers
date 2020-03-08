#pragma once

#include "../../json/Value"
#include "../../unmapped/EntityContext"
#include "../../unmapped/RailMovementComponent"


class RailMovementDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, RailMovementDefinition>> &);
    void initialize(EntityContext &, RailMovementComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
