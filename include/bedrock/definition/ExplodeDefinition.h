#pragma once

#include "../../unmapped/EntityContext.h"
#include "../../unmapped/ExplodeComponent.h"
#include "../../json/Value.h"
#include <memory>


class ExplodeDefinition {

public:
    void serializeData(Json::Value &)const;
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ExplodeDefinition>> &); //TODO: incomplete function definition
    void initialize(EntityContext &, ExplodeComponent &)const;
    void deserializeData(Json::Value &);
    ExplodeDefinition();
};
