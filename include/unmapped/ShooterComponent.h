#pragma once

#include "../bedrock/description/component/ShooterDescription"
#include "../bedrock/actor/Actor"


class ShooterComponent {

public:

    ShooterComponent(ShooterComponent&&);
    ShooterComponent(void);
    void initFromDefinition(Actor &);
    void initFromDefinition(Actor &, ShooterDescription const&);
    void onShoot(Actor &);
    void getAuxValue();
};
