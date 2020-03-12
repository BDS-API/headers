#pragma once

#include "../../unmapped/EntityContext.h"
#include "../../json/Value.h"
#include "../../unmapped/BossComponent.h"
#include <memory>


class BossDefinition {

public:
    void serializeData(Json::Value &)const;
    BossDefinition();
    void initialize(EntityContext &, BossComponent &);
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BossDefinition>> &); //TODO: incomplete function definition
    void deserializeData(Json::Value &);
    ~BossDefinition();
};
