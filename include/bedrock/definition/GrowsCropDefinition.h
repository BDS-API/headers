#pragma once

#include <memory>


namespace GrowsCropDefinition {

    void serializeData(Json::Value &)const;
    void deserializeData(Json::Value &);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GrowsCropDefinition>> &);
    void initialize(EntityContext &, GrowsCropComponent &);
};
