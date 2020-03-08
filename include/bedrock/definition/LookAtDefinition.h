#pragma once

#include "../../unmapped/EntityContext"
#include "../../json/Value"


class LookAtDefinition {

public:

    LookAtDefinition(void);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LookAtDefinition>> &);
    void initialize(EntityContext &, LookAtComponent &)const;
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
