#pragma once

#include <memory>
#include "./PeekDefinition.h"
#include "../../json/Value.h"


class PeekDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, PeekDefinition>> &); //TODO: incomplete function definition
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    PeekDefinition();
    ~PeekDefinition();
};
