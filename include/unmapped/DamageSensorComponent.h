#pragma once

#include "../bedrock/actor/Actor"


class DamageSensorComponent {

public:

    DamageSensorComponent(void);
    void initFromDefinition(Actor &, DamageSensorDefinition const&);
    void getCause(void)const;
    bool isFatal(void)const;
    void getDamageMultipler(void);
    void recordDamage(Actor &, Actor*, ActorDamageCause, int, bool, VariantParameterList);
    DamageSensorComponent(DamageSensorComponent&&);
};
