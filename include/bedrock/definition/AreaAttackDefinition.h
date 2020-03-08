#pragma once

#include "../../json/Value"
#include "../../unmapped/EntityContext"
#include "../../unmapped/AreaAttackComponent"


class AreaAttackDefinition {

public:

    AreaAttackDefinition(void);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AreaAttackDefinition>> &);
    void setDamageCause(std::string const&);
    void initialize(EntityContext &, AreaAttackComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
