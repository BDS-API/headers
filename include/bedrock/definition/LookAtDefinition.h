#pragma once

#include "./LookAtDefinition.h"
#include "../../unmapped/LookAtComponent.h"
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "../../json/Value.h"


class LookAtDefinition {

public:

    LookAtDefinition();
    ~LookAtDefinition();
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LookAtDefinition>> &); //TODO: incomplete function definition
    void initialize(EntityContext &, LookAtComponent &)const;
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
