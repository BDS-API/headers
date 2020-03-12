#pragma once

#include <memory>


class PhysicsDefinition {

public:
    PhysicsDefinition();
    void initialize(EntityContext &, PhysicsComponent &);
    void serializeData(Json::Value &)const;
    void deserializeData(Json::Value &);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, PhysicsDefinition>> &);
};
