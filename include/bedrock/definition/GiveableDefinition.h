#pragma once

#include "../../unmapped/GiveableTrigger.h"
#include <memory>
#include "../../unmapped/GiveableComponent.h"
#include "../../unmapped/EntityContext.h"
#include "./GiveableDefinition.h"
#include "../../json/Value.h"


class GiveableDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GiveableDefinition>> &); //TODO: incomplete function definition
    void addGiveableTrigger(GiveableTrigger const&);
    void initialize(EntityContext &, GiveableComponent &);
    void deserializeData(Json::Value &);
    void _parseGiveableTriggers(Json::Value &);
    void serializeData(Json::Value &)const;
    GiveableDefinition();
    ~GiveableDefinition();
};
