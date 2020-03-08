#pragma once

#include "../../unmapped/GrowsCropComponent"
#include "../../json/Value"
#include "../../unmapped/EntityContext"


class GrowsCropDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GrowsCropDefinition>> &);
    void initialize(EntityContext &, GrowsCropComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
