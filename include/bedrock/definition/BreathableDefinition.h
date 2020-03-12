#pragma once

#include <string>
#include "../../unmapped/EntityContext.h"
#include "../../json/Value.h"
#include <memory>
#include "../../unmapped/BreathableComponent.h"


class BreathableDefinition {

public:
    void addBreathableBlockByName(std::string const&);
    void initialize(EntityContext &, BreathableComponent &);
    void deserializeData(Json::Value &);
    void addNonBreathableBlockByName(std::string const&);
    BreathableDefinition();
    ~BreathableDefinition();
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BreathableDefinition>> &); //TODO: incomplete function definition
    void serializeData(Json::Value &)const;
};
