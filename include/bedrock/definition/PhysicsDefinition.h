#pragma once

#include <memory>
#include "../../unmapped/EntityContext.h"
#include "../../unmapped/PhysicsComponent.h"
#include "./PhysicsDefinition.h"
#include "../../json/Value.h"


class PhysicsDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, PhysicsDefinition>> &); //TODO: incomplete function definition
    void initialize(EntityContext &, PhysicsComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    PhysicsDefinition();
};
