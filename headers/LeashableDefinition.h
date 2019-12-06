#pragma once

class LeashableDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LeashableDefinition>> &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    void LeashableDefinition(void);
};
