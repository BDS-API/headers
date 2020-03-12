#pragma once

#include <memory>


namespace FlockingDefinition {

    void initialize(EntityContext &, FlockingComponent &);
    void deserializeData(Json::Value &);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, FlockingDefinition>> &);
    void serializeData(Json::Value &)const;
};
