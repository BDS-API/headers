#pragma once

#include <memory>
#include "../../unmapped/EntityContext.h"
#include "../../unmapped/LegacyTradeableComponent.h"
#include "./LegacyTradeableDefinition.h"
#include "../../json/Value.h"


class LegacyTradeableDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LegacyTradeableDefinition>> &); //TODO: incomplete function definition
    void initialize(EntityContext &, LegacyTradeableComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    LegacyTradeableDefinition();
    ~LegacyTradeableDefinition();
};
