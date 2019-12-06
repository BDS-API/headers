#pragma once

class PhysicsDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, PhysicsDefinition>> &);
    void initialize(EntityContext &, PhysicsComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    void PhysicsDefinition(void);
};
