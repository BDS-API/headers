#pragma once

#include <memory>


namespace ScaleByAgeDefinition {

    void initialize(EntityContext &, ScaleByAgeComponent &);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ScaleByAgeDefinition>> &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
