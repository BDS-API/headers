#pragma once

#include "../../unmapped/EntityContext"
#include "../../json/Value"


class EquippableDefinition {

public:

    EquippableDefinition(void);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EquippableDefinition>> &);
    void initialize(EntityContext &, EquippableComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
