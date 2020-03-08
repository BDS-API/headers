#pragma once

#include "../../unmapped/LookAtComponent"
#include "../../json/Value"
#include "../../unmapped/EntityContext"


class LookAtDefinition {

public:

    LookAtDefinition(void);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LookAtDefinition>> &);
    void initialize(EntityContext &, LookAtComponent &)const;
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
