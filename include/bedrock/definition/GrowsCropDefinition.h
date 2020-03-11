#pragma once

#include "../../unmapped/GrowsCropComponent.h"
#include "./GrowsCropDefinition.h"
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "../../json/Value.h"


class GrowsCropDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GrowsCropDefinition>> &); //TODO: incomplete function definition
    void initialize(EntityContext &, GrowsCropComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
