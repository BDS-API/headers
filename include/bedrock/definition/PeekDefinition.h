#pragma once

#include <memory>


class PeekDefinition {

public:
    ~PeekDefinition();
    PeekDefinition();
    void serializeData(Json::Value &)const;
    void deserializeData(Json::Value &);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, PeekDefinition>> &);
};
