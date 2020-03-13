#pragma once

#include "VariantParameterList.h"


class DamageSensorComponent {

public:
    DamageSensorComponent(); // _ZN21DamageSensorComponentC2Ev
    void initFromDefinition(Actor &, DamageSensorDefinition const&); // _ZN21DamageSensorComponent18initFromDefinitionER5ActorRK22DamageSensorDefinition
    void getCause()const; // _ZNK21DamageSensorComponent8getCauseEv
    bool isFatal()const; // _ZNK21DamageSensorComponent7isFatalEv
    void getDamageMultipler(); // _ZN21DamageSensorComponent18getDamageMultiplerEv
//  void recordDamage(Actor &, Actor *, ActorDamageCause, int, bool, VariantParameterList); //TODO: incomplete function definition // _ZN21DamageSensorComponent12recordDamageER5ActorPS0_16ActorDamageCauseib20VariantParameterList
    ~DamageSensorComponent(); // _ZN21DamageSensorComponentD2Ev
    DamageSensorComponent(DamageSensorComponent &&); // _ZN21DamageSensorComponentC2EOS_
};
