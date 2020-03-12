#pragma once

#include <memory>


class ExplodeDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ExplodeDefinition>> &);
    void initialize(EntityContext &, ExplodeComponent &)const;
    void serializeData(Json::Value &)const;
    ExplodeDefinition();
    void deserializeData(Json::Value &);
};
