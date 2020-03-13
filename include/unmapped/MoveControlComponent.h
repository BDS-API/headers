#pragma once

#include <memory>


class MoveControlComponent {

public:
    ~MoveControlComponent(); // _ZN20MoveControlComponentD2Ev
    MoveControlComponent(MoveControlComponent &&); // _ZN20MoveControlComponentC2EOS_
    MoveControlComponent(); // _ZN20MoveControlComponentC2Ev
    void initializeFromDefinition(Mob &, MoveControlDescription *); // _ZN20MoveControlComponent24initializeFromDefinitionER3MobP22MoveControlDescription
    void setInternalType(std::unique_ptr<MoveControl>); // _ZN20MoveControlComponent15setInternalTypeESt10unique_ptrI11MoveControlSt14default_deleteIS1_EE
    void getHasWantedPosition()const; // _ZNK20MoveControlComponent20getHasWantedPositionEv
    void setHasWantedPosition(bool); // _ZN20MoveControlComponent20setHasWantedPositionEb
    void getWantedPosition(); // _ZN20MoveControlComponent17getWantedPositionEv
    void getShouldBreach()const; // _ZNK20MoveControlComponent15getShouldBreachEv
    void setShouldBreach(bool); // _ZN20MoveControlComponent15setShouldBreachEb
    void getMaxTurn()const; // _ZNK20MoveControlComponent10getMaxTurnEv
    void setMaxTurn(float); // _ZN20MoveControlComponent10setMaxTurnEf
    void getSpeedModifier()const; // _ZNK20MoveControlComponent16getSpeedModifierEv
    void setSpeedModifier(float); // _ZN20MoveControlComponent16setSpeedModifierEf
    void _setWantedPosition(Vec3 const&); // _ZN20MoveControlComponent18_setWantedPositionERK4Vec3
    void setWantedPosition(Mob &, Vec3 const&, float); // _ZN20MoveControlComponent17setWantedPositionER3MobRK4Vec3f
    void update(Mob &); // _ZN20MoveControlComponent6updateER3Mob
};
