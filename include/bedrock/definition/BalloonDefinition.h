#pragma once

#include "../../json/Value.h"
#include <memory>


class BalloonDefinition {

public:
    BalloonDefinition();
    void serializeData(Json::Value &)const;
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BalloonDefinition>> &); //TODO: incomplete function definition
    void deserializeData(Json::Value &);
};
