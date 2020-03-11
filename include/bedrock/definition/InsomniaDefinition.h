#pragma once

#include "./InsomniaDefinition.h"
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "../../unmapped/InsomniaComponent.h"
#include "../../json/Value.h"


class InsomniaDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, InsomniaDefinition>> &); //TODO: incomplete function definition
    void initialize(EntityContext &, InsomniaComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
