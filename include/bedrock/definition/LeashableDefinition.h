#pragma once

#include "../../json/Value.h"
#include <memory>


class LeashableDefinition {

public:
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LeashableDefinition>> &); //TODO: incomplete function definition
    void deserializeData(Json::Value &);
    ~LeashableDefinition();
    LeashableDefinition();
    void serializeData(Json::Value &)const;
};
