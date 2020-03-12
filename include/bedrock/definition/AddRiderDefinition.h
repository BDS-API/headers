#pragma once

#include <memory>


class AddRiderDefinition {

public:
    ~AddRiderDefinition();
    AddRiderDefinition();
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AddRiderDefinition>> &);
    void deserializeData(Json::Value &);
    void initialize(EntityContext &, AddRiderComponent &);
    void serializeData(Json::Value &)const;
};
