#pragma once

#include <memory>


class EntitySensorDefinition {

public:
    EntitySensorDefinition();
    void initialize(EntityContext &, EntitySensorComponent &);
    ~EntitySensorDefinition();
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EntitySensorDefinition>> &);
};
