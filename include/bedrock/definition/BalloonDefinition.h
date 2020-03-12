#pragma once

#include <memory>


class BalloonDefinition {

public:
    BalloonDefinition();
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BalloonDefinition>> &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
