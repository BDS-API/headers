#pragma once

#include <memory>


class LegacyTradeableDefinition {

public:
    ~LegacyTradeableDefinition();
    void serializeData(Json::Value &)const;
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LegacyTradeableDefinition>> &);
    void deserializeData(Json::Value &);
    LegacyTradeableDefinition();
    void initialize(EntityContext &, LegacyTradeableComponent &);
};
