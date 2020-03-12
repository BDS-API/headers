#pragma once

#include "VariantParameterList.h"


class DamageSensorComponent {

public:
    bool isFatal()const;
    DamageSensorComponent(DamageSensorComponent &&);
    ~DamageSensorComponent();
    void initFromDefinition(Actor &, DamageSensorDefinition const&);
    void getDamageMultipler();
//  void recordDamage(Actor &, Actor *, ActorDamageCause, int, bool, VariantParameterList); //TODO: incomplete function definition
    void getCause()const;
    DamageSensorComponent();
};
