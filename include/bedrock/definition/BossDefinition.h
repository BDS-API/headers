#pragma once

#include "./BossDefinition.h"
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "../../unmapped/BossComponent.h"
#include "../../json/Value.h"


class BossDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BossDefinition>> &); //TODO: incomplete function definition
    void initialize(EntityContext &, BossComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    BossDefinition();
    ~BossDefinition();
};
