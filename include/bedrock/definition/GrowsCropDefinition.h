#pragma once

#include "../../unmapped/EntityContext.h"
#include "../../unmapped/GrowsCropComponent.h"
#include "../../json/Value.h"
#include <memory>


class GrowsCropDefinition {

public:
    void initialize(EntityContext &, GrowsCropComponent &);
    void serializeData(Json::Value &)const;
    void deserializeData(Json::Value &);
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GrowsCropDefinition>> &); //TODO: incomplete function definition
};
