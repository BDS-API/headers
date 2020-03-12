#pragma once



class ShooterComponent {

public:
    ShooterComponent(ShooterComponent &&);
    void initFromDefinition(Actor &, ShooterDescription const&);
    ~ShooterComponent();
    void getAuxValue();
    ShooterComponent();
    void initFromDefinition(Actor &);
    void onShoot(Actor &);
};
