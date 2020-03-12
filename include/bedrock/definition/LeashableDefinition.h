#pragma once

#include <memory>


class LeashableDefinition {

public:
    void serializeData(Json::Value &)const;
    void deserializeData(Json::Value &);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LeashableDefinition>> &);
    ~LeashableDefinition();
    LeashableDefinition();
};
