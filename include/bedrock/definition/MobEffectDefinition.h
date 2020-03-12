#pragma once

#include <string>
#include <memory>


class MobEffectDefinition {

public:
    ~MobEffectDefinition();
    void setEffectTimeInTicks(int const&);
    void setMobEffectByName(std::string const&);
    MobEffectDefinition();
    void initialize(EntityContext &, MobEffectComponent &);
    void deserializeData(Json::Value &);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, MobEffectDefinition>> &);
    void serializeData(Json::Value &)const;
};
