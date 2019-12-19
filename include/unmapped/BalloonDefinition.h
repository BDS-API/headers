#pragma once

class BalloonDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BalloonDefinition>> &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    BalloonDefinition(void);
};
