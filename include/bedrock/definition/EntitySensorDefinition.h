#pragma once

#include "../../unmapped/EntitySensorComponent"
#include "../../unmapped/EntityContext"


class EntitySensorDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EntitySensorDefinition>> &);
    void initialize(EntityContext &, EntitySensorComponent &);
    EntitySensorDefinition(void);
};
