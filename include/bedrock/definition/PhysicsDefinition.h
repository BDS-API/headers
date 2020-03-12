#pragma once

#include "../../unmapped/EntityContext.h"
#include "../../unmapped/PhysicsComponent.h"
#include "../../json/Value.h"
#include <memory>


class PhysicsDefinition {

public:
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, PhysicsDefinition>> &); //TODO: incomplete function definition
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    void initialize(EntityContext &, PhysicsComponent &);
    PhysicsDefinition();
};
