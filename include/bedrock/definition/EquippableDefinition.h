#pragma once

#include <memory>


class EquippableDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EquippableDefinition>> &);
    void serializeData(Json::Value &)const;
    void deserializeData(Json::Value &);
    EquippableDefinition();
    void initialize(EntityContext &, EquippableComponent &);
    ~EquippableDefinition();
};
