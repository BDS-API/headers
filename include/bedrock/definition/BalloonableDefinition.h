#pragma once

#include "../../json/Value"


class BalloonableDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BalloonableDefinition>> &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    BalloonableDefinition(void);
};
