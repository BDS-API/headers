#pragma once



class ShooterComponent {

public:
    ~ShooterComponent(); // _ZN16ShooterComponentD2Ev
    ShooterComponent(ShooterComponent &&); // _ZN16ShooterComponentC2EOS_
    ShooterComponent(); // _ZN16ShooterComponentC2Ev
    void initFromDefinition(Actor &); // _ZN16ShooterComponent18initFromDefinitionER5Actor
    void initFromDefinition(Actor &, ShooterDescription const&); // _ZN16ShooterComponent18initFromDefinitionER5ActorRK18ShooterDescription
    void onShoot(Actor &); // _ZN16ShooterComponent7onShootER5Actor
    void getAuxValue(); // _ZN16ShooterComponent11getAuxValueEv
};
