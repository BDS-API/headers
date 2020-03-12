#pragma once

#include <memory>


class GiveableDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GiveableDefinition>> &);
    void initialize(EntityContext &, GiveableComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    ~GiveableDefinition();
    void _parseGiveableTriggers(Json::Value &);
    void addGiveableTrigger(GiveableTrigger const&);
    GiveableDefinition();
};
