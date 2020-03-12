#pragma once

#include "../bedrock/description/component/ShooterDescription.h"
#include "../bedrock/actor/Actor.h"


class ShooterComponent {

public:
    ShooterComponent();
    void onShoot(Actor &);
    void initFromDefinition(Actor &, ShooterDescription const&);
    ShooterComponent(ShooterComponent &&);
    void getAuxValue();
    void initFromDefinition(Actor &);
    ~ShooterComponent();
};
