#pragma once

#include "../../unmapped/EntityContext"
#include "../../unmapped/GiveableTrigger"
#include "../../json/Value"


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
