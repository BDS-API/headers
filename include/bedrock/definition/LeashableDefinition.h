#pragma once

#include "../../json/Value.h"
#include <memory>
#include "./LeashableDefinition.h"


class LeashableDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LeashableDefinition>> &); //TODO: incomplete function definition
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    LeashableDefinition();
    ~LeashableDefinition();
};
