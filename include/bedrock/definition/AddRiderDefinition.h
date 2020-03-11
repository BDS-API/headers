#pragma once

#include <memory>
#include "../../unmapped/EntityContext.h"
#include "../../json/Value.h"
#include "./AddRiderDefinition.h"
#include "../../unmapped/AddRiderComponent.h"


class AddRiderDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AddRiderDefinition>> &); //TODO: incomplete function definition
    void initialize(EntityContext &, AddRiderComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    AddRiderDefinition();
    ~AddRiderDefinition();
};
