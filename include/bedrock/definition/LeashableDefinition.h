#pragma once

#include "../../json/Value"


class LeashableDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LeashableDefinition>> &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    LeashableDefinition(void);
};
