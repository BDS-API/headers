#pragma once

#include "../bedrock/definition/DamageSensorDefinition.h"
#include "../bedrock/actor/Actor.h"
#include "./DamageSensorComponent.h"
#include "./VariantParameterList.h"


class DamageSensorComponent {

public:

    DamageSensorComponent();
    void initFromDefinition(Actor &, DamageSensorDefinition const&);
    void getCause()const;
    bool isFatal()const;
    void getDamageMultipler();
//  void recordDamage(Actor &, Actor *, ActorDamageCause, int, bool, VariantParameterList); //TODO: incomplete function definition
    ~DamageSensorComponent();
    DamageSensorComponent(DamageSensorComponent &&);
};
