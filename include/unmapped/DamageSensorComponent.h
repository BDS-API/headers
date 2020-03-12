#pragma once

#include "VariantParameterList.h"
#include "../bedrock/definition/DamageSensorDefinition.h"
#include "../bedrock/actor/Actor.h"


class DamageSensorComponent {

public:
    void getCause()const;
    void initFromDefinition(Actor &, DamageSensorDefinition const&);
    ~DamageSensorComponent();
    bool isFatal()const;
    void getDamageMultipler();
    DamageSensorComponent();
//  void recordDamage(Actor &, Actor *, ActorDamageCause, int, bool, VariantParameterList); //TODO: incomplete function definition
    DamageSensorComponent(DamageSensorComponent &&);
};
