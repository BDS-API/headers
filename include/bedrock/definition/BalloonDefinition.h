#pragma once

#include "./BalloonDefinition.h"
#include <memory>
#include "../../json/Value.h"


class BalloonDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BalloonDefinition>> &); //TODO: incomplete function definition
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    BalloonDefinition();
};
