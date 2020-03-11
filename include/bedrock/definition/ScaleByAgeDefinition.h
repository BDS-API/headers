#pragma once

#include "../../unmapped/ScaleByAgeComponent.h"
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "./ScaleByAgeDefinition.h"
#include "../../json/Value.h"


class ScaleByAgeDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ScaleByAgeDefinition>> &); //TODO: incomplete function definition
    void initialize(EntityContext &, ScaleByAgeComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
