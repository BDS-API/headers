#pragma once

#include <memory>
#include "../../unmapped/EntityContext.h"
#include "./FlockingDefinition.h"
#include "../../unmapped/FlockingComponent.h"
#include "../../json/Value.h"


class FlockingDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, FlockingDefinition>> &); //TODO: incomplete function definition
    void initialize(EntityContext &, FlockingComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
