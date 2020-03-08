#pragma once

#include "../../unmapped/BreathableComponent"
#include "../../json/Value"
#include "../../unmapped/EntityContext"


class BreathableDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BreathableDefinition>> &);
    void addBreathableBlockByName(std::string const&);
    void addNonBreathableBlockByName(std::string const&);
    void initialize(EntityContext &, BreathableComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    BreathableDefinition(void);
};
