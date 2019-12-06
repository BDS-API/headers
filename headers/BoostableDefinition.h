#pragma once

class BoostableDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BoostableDefinition>> &);
    void initialize(EntityContext &, BoostableComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    void BoostableDefinition(void);
};
