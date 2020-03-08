#pragma once

#include "../../json/Value"
#include "../../unmapped/EntityContext"
#include "../../unmapped/BossComponent"


class BossDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BossDefinition>> &);
    void initialize(EntityContext &, BossComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    BossDefinition(void);
};
