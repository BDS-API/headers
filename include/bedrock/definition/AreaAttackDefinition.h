#pragma once

#include "../../unmapped/AreaAttackComponent.h"
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "./AreaAttackDefinition.h"
#include "../../json/Value.h"
#include <string>


class AreaAttackDefinition {

public:

    AreaAttackDefinition();
    ~AreaAttackDefinition();
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AreaAttackDefinition>> &); //TODO: incomplete function definition
    void setDamageCause(std::string const&);
    void initialize(EntityContext &, AreaAttackComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
