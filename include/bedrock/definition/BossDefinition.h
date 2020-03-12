#pragma once

#include <memory>


class BossDefinition {

public:
    void initialize(EntityContext &, BossComponent &);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BossDefinition>> &);
    void serializeData(Json::Value &)const;
    ~BossDefinition();
    BossDefinition();
    void deserializeData(Json::Value &);
};
