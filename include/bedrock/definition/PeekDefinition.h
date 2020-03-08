#pragma once

#include "../../json/Value"


class PeekDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, PeekDefinition>> &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    PeekDefinition(void);
};
