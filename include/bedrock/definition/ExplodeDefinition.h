#pragma once

#include "../../unmapped/ExplodeComponent.h"
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "./ExplodeDefinition.h"
#include "../../json/Value.h"


class ExplodeDefinition {

public:

    ExplodeDefinition();
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ExplodeDefinition>> &); //TODO: incomplete function definition
    void initialize(EntityContext &, ExplodeComponent &)const;
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
