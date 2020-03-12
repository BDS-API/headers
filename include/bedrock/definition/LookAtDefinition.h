#pragma once

#include <memory>
#include "../../unmapped/EntityContext.h"
#include "../../json/Value.h"
#include "../../unmapped/LookAtComponent.h"


class LookAtDefinition {

public:
    void initialize(EntityContext &, LookAtComponent &)const;
    void serializeData(Json::Value &)const;
    void deserializeData(Json::Value &);
    LookAtDefinition();
    ~LookAtDefinition();
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LookAtDefinition>> &); //TODO: incomplete function definition
};
