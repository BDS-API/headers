#pragma once

#include "../../json/Value"
#include "../../unmapped/EntityContext"
#include "../../unmapped/LegacyTradeableComponent"


class LegacyTradeableDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LegacyTradeableDefinition>> &);
    void initialize(EntityContext &, LegacyTradeableComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    LegacyTradeableDefinition(void);
};
