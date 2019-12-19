#pragma once

class ShooterComponent {

public:

    ShooterComponent(ShooterComponent&&);
    ShooterComponent(void);
    void initFromDefinition(Actor &);
    void initFromDefinition(Actor &, ShooterDescription const&);
    void onShoot(Actor &);
    void getAuxValue(void);
};
