#pragma once

#include "./EntitySensorDefinition.h"
#include <memory>
#include "../../unmapped/EntitySensorComponent.h"
#include "../../unmapped/EntityContext.h"


class EntitySensorDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EntitySensorDefinition>> &); //TODO: incomplete function definition
    void initialize(EntityContext &, EntitySensorComponent &);
    EntitySensorDefinition();
    ~EntitySensorDefinition();
};
