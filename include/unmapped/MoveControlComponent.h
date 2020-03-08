#pragma once

#include "../bedrock/actor/Mob"
#include "../bedrock/control/MoveControl"


class MoveControlComponent {

public:

    MoveControlComponent(MoveControlComponent&&);
    MoveControlComponent(void);
    void initializeFromDefinition(Mob &, MoveControlDescription *);
    void setInternalType(std::unique_ptr<MoveControl, std::default_delete<MoveControl>>);
    void getHasWantedPosition(void)const;
    void setHasWantedPosition(bool);
    void getWantedPosition(void);
    void getShouldBreach(void)const;
    void setShouldBreach(bool);
    void getMaxTurn(void)const;
    void setMaxTurn(float);
    void getSpeedModifier(void)const;
    void setSpeedModifier(float);
    void _setWantedPosition(Vec3 const&);
    void setWantedPosition(Mob &, Vec3 const&, float);
    void update(Mob &);
};
