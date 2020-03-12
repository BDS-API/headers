#pragma once

#include "../../unmapped/FlockingComponent.h"
#include "../../unmapped/EntityContext.h"
#include "../../json/Value.h"
#include <memory>


class FlockingDefinition {

public:
    void deserializeData(Json::Value &);
    void initialize(EntityContext &, FlockingComponent &);
    void serializeData(Json::Value &)const;
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, FlockingDefinition>> &); //TODO: incomplete function definition
};
