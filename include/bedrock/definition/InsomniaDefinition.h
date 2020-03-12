#pragma once

#include "../../unmapped/EntityContext.h"
#include "../../unmapped/InsomniaComponent.h"
#include "../../json/Value.h"
#include <memory>


class InsomniaDefinition {

public:
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, InsomniaDefinition>> &); //TODO: incomplete function definition
    void initialize(EntityContext &, InsomniaComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
