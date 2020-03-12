#pragma once

#include "../../unmapped/GiveableComponent.h"
#include "../../unmapped/GiveableTrigger.h"
#include "../../json/Value.h"
#include <memory>
#include "../../unmapped/EntityContext.h"


class GiveableDefinition {

public:
    GiveableDefinition();
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GiveableDefinition>> &); //TODO: incomplete function definition
    ~GiveableDefinition();
    void _parseGiveableTriggers(Json::Value &);
    void serializeData(Json::Value &)const;
    void deserializeData(Json::Value &);
    void addGiveableTrigger(GiveableTrigger const&);
    void initialize(EntityContext &, GiveableComponent &);
};
