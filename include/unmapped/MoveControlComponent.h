#pragma once

#include "../bedrock/actor/Mob"
#include "../bedrock/control/MoveControl"
#include "../bedrock/util/Vec3"
#include "../bedrock/description/component/MoveControlDescription"


class MoveControlComponent {

public:

    MoveControlComponent(MoveControlComponent&&);
    MoveControlComponent(void);
    void initializeFromDefinition(Mob &, MoveControlDescription *);
    void setInternalType(std::unique_ptr<MoveControl, std::default_delete<MoveControl>>);
    void getHasWantedPosition()const;
    void setHasWantedPosition(bool);
    void getWantedPosition();
    void getShouldBreach()const;
    void setShouldBreach(bool);
    void getMaxTurn()const;
    void setMaxTurn(float);
    void getSpeedModifier()const;
    void setSpeedModifier(float);
    void _setWantedPosition(Vec3 const&);
    void setWantedPosition(Mob &, Vec3 const&, float);
    void update(Mob &);
};
