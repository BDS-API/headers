#pragma once

#include <memory>
#include "../../unmapped/EntityContext.h"
#include "./BoostableDefinition.h"
#include "../../unmapped/BoostableComponent.h"
#include "../../json/Value.h"


class BoostableDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BoostableDefinition>> &); //TODO: incomplete function definition
    void initialize(EntityContext &, BoostableComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    BoostableDefinition();
    ~BoostableDefinition();
};
