#pragma once

#include "../../json/Value.h"
#include <memory>


class BalloonableDefinition {

public:
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BalloonableDefinition>> &); //TODO: incomplete function definition
    ~BalloonableDefinition();
    void deserializeData(Json::Value &);
    BalloonableDefinition();
    void serializeData(Json::Value &)const;
};
