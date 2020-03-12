#pragma once

#include <string>
#include "../../json/Value.h"
#include "../../unmapped/AreaAttackComponent.h"
#include <memory>
#include "../../unmapped/EntityContext.h"


class AreaAttackDefinition {

public:
    void setDamageCause(std::string const&);
    ~AreaAttackDefinition();
    AreaAttackDefinition();
    void serializeData(Json::Value &)const;
    void deserializeData(Json::Value &);
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AreaAttackDefinition>> &); //TODO: incomplete function definition
    void initialize(EntityContext &, AreaAttackComponent &);
};
