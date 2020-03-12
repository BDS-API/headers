#pragma once

#include <memory>


class BoostableDefinition {

public:
    ~BoostableDefinition();
    void initialize(EntityContext &, BoostableComponent &);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BoostableDefinition>> &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    BoostableDefinition();
};
