#pragma once

class AreaAttackDefinition {

public:

    void AreaAttackDefinition(void);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AreaAttackDefinition>> &);
    void setDamageCause(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void initialize(EntityContext &, AreaAttackComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
