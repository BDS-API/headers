#pragma once

class MobEffectDefinition {

public:

    void MobEffectDefinition(void);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, MobEffectDefinition>> &);
    void setMobEffectByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void setEffectTimeInTicks(int const&);
    void initialize(EntityContext &, MobEffectComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
