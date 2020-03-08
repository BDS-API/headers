#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/definition/DamageSensorDefinition"


class DamageSensorComponent {

public:

    DamageSensorComponent(void);
    void initFromDefinition(Actor &, DamageSensorDefinition const&);
    void getCause()const;
    bool isFatal()const;
    void getDamageMultipler();
    void recordDamage(Actor &, Actor*, ActorDamageCause, int, bool, VariantParameterList);
    DamageSensorComponent(DamageSensorComponent&&);
};
