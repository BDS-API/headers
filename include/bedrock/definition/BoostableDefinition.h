#pragma once

#include "../../unmapped/BoostableComponent.h"
#include "../../unmapped/EntityContext.h"
#include "../../json/Value.h"
#include <memory>


class BoostableDefinition {

public:
    ~BoostableDefinition();
    BoostableDefinition();
    void initialize(EntityContext &, BoostableComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BoostableDefinition>> &); //TODO: incomplete function definition
};
