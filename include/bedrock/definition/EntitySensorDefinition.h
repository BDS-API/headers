#pragma once

#include "../../unmapped/EntityContext"
#include "../../unmapped/EntitySensorComponent"


class EntitySensorDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EntitySensorDefinition>> &);
    void initialize(EntityContext &, EntitySensorComponent &);
    EntitySensorDefinition(void);
};
