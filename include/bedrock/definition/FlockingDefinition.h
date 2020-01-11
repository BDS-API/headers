#pragma once

class FlockingDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, FlockingDefinition>> &);
    void initialize(EntityContext &, FlockingComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};