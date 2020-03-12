#pragma once

#include "../../unmapped/EntityContext.h"
#include "../../unmapped/ScaleByAgeComponent.h"
#include "../../json/Value.h"
#include <memory>


class ScaleByAgeDefinition {

public:
    void initialize(EntityContext &, ScaleByAgeComponent &);
    void serializeData(Json::Value &)const;
    void deserializeData(Json::Value &);
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ScaleByAgeDefinition>> &); //TODO: incomplete function definition
};
