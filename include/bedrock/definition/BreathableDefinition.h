#pragma once

#include <string>
#include <memory>


class BreathableDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BreathableDefinition>> &);
    void addBreathableBlockByName(std::string const&);
    void initialize(EntityContext &, BreathableComponent &);
    void addNonBreathableBlockByName(std::string const&);
    void serializeData(Json::Value &)const;
    BreathableDefinition();
    ~BreathableDefinition();
    void deserializeData(Json::Value &);
};
