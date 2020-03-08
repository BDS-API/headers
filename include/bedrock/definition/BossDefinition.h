#pragma once

#include "../../unmapped/BossComponent"
#include "../../json/Value"
#include "../../unmapped/EntityContext"


class BossDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BossDefinition>> &);
    void initialize(EntityContext &, BossComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    BossDefinition(void);
};
