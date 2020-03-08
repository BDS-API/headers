#pragma once

#include "../../unmapped/EntityContext"
#include "../../json/Value"


class ScaleByAgeDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ScaleByAgeDefinition>> &);
    void initialize(EntityContext &, ScaleByAgeComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
