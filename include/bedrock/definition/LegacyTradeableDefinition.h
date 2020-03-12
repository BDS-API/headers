#pragma once

#include "../../unmapped/LegacyTradeableComponent.h"
#include "../../unmapped/EntityContext.h"
#include "../../json/Value.h"
#include <memory>


class LegacyTradeableDefinition {

public:
    ~LegacyTradeableDefinition();
    void deserializeData(Json::Value &);
    LegacyTradeableDefinition();
    void serializeData(Json::Value &)const;
    void initialize(EntityContext &, LegacyTradeableComponent &);
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LegacyTradeableDefinition>> &); //TODO: incomplete function definition
};
