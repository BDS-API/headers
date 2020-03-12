#pragma once

#include "../../json/Value.h"
#include <memory>


class PeekDefinition {

public:
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, PeekDefinition>> &); //TODO: incomplete function definition
    ~PeekDefinition();
    PeekDefinition();
    void serializeData(Json::Value &)const;
    void deserializeData(Json::Value &);
};
