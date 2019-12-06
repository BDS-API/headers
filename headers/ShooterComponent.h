#pragma once

class ShooterComponent {

public:

    void ShooterComponent(ShooterComponent&&);
    void ShooterComponent(void);
    void initFromDefinition(Actor &);
    void initFromDefinition(Actor &, ShooterDescription const&);
    void onShoot(Actor &);
    void getAuxValue(void);
};
