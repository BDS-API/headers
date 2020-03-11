#pragma once

#include "./BalloonableDefinition.h"
#include <memory>
#include "../../json/Value.h"


class BalloonableDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BalloonableDefinition>> &); //TODO: incomplete function definition
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    BalloonableDefinition();
    ~BalloonableDefinition();
};
