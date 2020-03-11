#pragma once

#include "../bedrock/actor/Actor.h"
#include "../bedrock/description/component/ShooterDescription.h"
#include "./ShooterComponent.h"


class ShooterComponent {

public:

    ~ShooterComponent();
    ShooterComponent(ShooterComponent &&);
    ShooterComponent();
    void initFromDefinition(Actor &);
    void initFromDefinition(Actor &, ShooterDescription const&);
    void onShoot(Actor &);
    void getAuxValue();
};
