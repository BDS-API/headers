#pragma once

#include "../../unmapped/BreathableComponent.h"
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "./BreathableDefinition.h"
#include "../../json/Value.h"
#include <string>


class BreathableDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BreathableDefinition>> &); //TODO: incomplete function definition
    void addBreathableBlockByName(std::string const&);
    void addNonBreathableBlockByName(std::string const&);
    void initialize(EntityContext &, BreathableComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    BreathableDefinition();
    ~BreathableDefinition();
};
