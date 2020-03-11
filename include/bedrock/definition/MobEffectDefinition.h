#pragma once

#include "./MobEffectDefinition.h"
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "../../unmapped/MobEffectComponent.h"
#include "../../json/Value.h"
#include <string>


class MobEffectDefinition {

public:

    MobEffectDefinition();
    ~MobEffectDefinition();
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, MobEffectDefinition>> &); //TODO: incomplete function definition
    void setMobEffectByName(std::string const&);
    void setEffectTimeInTicks(int const&);
    void initialize(EntityContext &, MobEffectComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
