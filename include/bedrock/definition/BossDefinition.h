#pragma once

#include "../../unmapped/EntityContext"
#include "../../json/Value"


class BossDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BossDefinition>> &);
    void initialize(EntityContext &, BossComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    BossDefinition(void);
};
