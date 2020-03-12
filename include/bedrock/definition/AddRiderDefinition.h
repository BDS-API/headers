#pragma once

#include "../../unmapped/EntityContext.h"
#include "../../unmapped/AddRiderComponent.h"
#include "../../json/Value.h"
#include <memory>


class AddRiderDefinition {

public:
    void serializeData(Json::Value &)const;
    AddRiderDefinition();
    void initialize(EntityContext &, AddRiderComponent &);
    void deserializeData(Json::Value &);
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AddRiderDefinition>> &); //TODO: incomplete function definition
    ~AddRiderDefinition();
};
