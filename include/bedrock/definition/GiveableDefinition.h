#pragma once

#include "../../unmapped/GiveableComponent"
#include "../../json/Value"
#include "../../unmapped/GiveableTrigger"
#include "../../unmapped/EntityContext"


class GiveableDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GiveableDefinition>> &);
    void addGiveableTrigger(GiveableTrigger const&);
    void initialize(EntityContext &, GiveableComponent &);
    void deserializeData(Json::Value &);
    void _parseGiveableTriggers(Json::Value &);
    void serializeData(Json::Value &)const;
    GiveableDefinition(void);
};
