#pragma once

#include <string>
#include <memory>


class AreaAttackDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AreaAttackDefinition>> &);
    void setDamageCause(std::string const&);
    void serializeData(Json::Value &)const;
    void deserializeData(Json::Value &);
    void initialize(EntityContext &, AreaAttackComponent &);
    AreaAttackDefinition();
    ~AreaAttackDefinition();
};
