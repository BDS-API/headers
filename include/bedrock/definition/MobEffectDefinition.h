#pragma once

#include <string>
#include "../../json/Value.h"
#include "../../unmapped/MobEffectComponent.h"
#include <memory>
#include "../../unmapped/EntityContext.h"


class MobEffectDefinition {

public:
    void initialize(EntityContext &, MobEffectComponent &);
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, MobEffectDefinition>> &); //TODO: incomplete function definition
    void setEffectTimeInTicks(int const&);
    void serializeData(Json::Value &)const;
    void deserializeData(Json::Value &);
    MobEffectDefinition();
    void setMobEffectByName(std::string const&);
    ~MobEffectDefinition();
};
