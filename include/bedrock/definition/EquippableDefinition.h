#pragma once

#include "./EquippableDefinition.h"
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "../../unmapped/EquippableComponent.h"
#include "../../json/Value.h"


class EquippableDefinition {

public:

    EquippableDefinition();
    ~EquippableDefinition();
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EquippableDefinition>> &); //TODO: incomplete function definition
    void initialize(EntityContext &, EquippableComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
