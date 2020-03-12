#pragma once

#include "../../unmapped/EntityContext.h"
#include "../../json/Value.h"
#include "../../unmapped/EquippableComponent.h"
#include <memory>


class EquippableDefinition {

public:
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EquippableDefinition>> &); //TODO: incomplete function definition
    void serializeData(Json::Value &)const;
    void deserializeData(Json::Value &);
    EquippableDefinition();
    void initialize(EntityContext &, EquippableComponent &);
    ~EquippableDefinition();
};
