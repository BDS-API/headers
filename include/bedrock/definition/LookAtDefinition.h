#pragma once

#include "../../json/Value"
#include "../../unmapped/EntityContext"
#include "../../unmapped/LookAtComponent"


class LookAtDefinition {

public:

    LookAtDefinition(void);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LookAtDefinition>> &);
    void initialize(EntityContext &, LookAtComponent &)const;
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
