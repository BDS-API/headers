#pragma once

#include <memory>


class LookControlComponent {

public:
    ~LookControlComponent(); // _ZN20LookControlComponentD2Ev
    LookControlComponent(LookControlComponent &&); // _ZN20LookControlComponentC2EOS_
    LookControlComponent(); // _ZN20LookControlComponentC2Ev
    void initialize(Mob &); // _ZN20LookControlComponent10initializeER3Mob
    void setInternalType(std::unique_ptr<LookControl>); // _ZN20LookControlComponent15setInternalTypeESt10unique_ptrI11LookControlSt14default_deleteIS1_EE
    void getHasWantedPosition()const; // _ZNK20LookControlComponent20getHasWantedPositionEv
    void setHasWantedPosition(bool); // _ZN20LookControlComponent20setHasWantedPositionEb
    void getHasWantedRotation()const; // _ZNK20LookControlComponent20getHasWantedRotationEv
    void setHasWantedRotation(bool); // _ZN20LookControlComponent20setHasWantedRotationEb
    void getXMax()const; // _ZNK20LookControlComponent7getXMaxEv
    void getYMax()const; // _ZNK20LookControlComponent7getYMaxEv
    void setYMax(float); // _ZN20LookControlComponent7setYMaxEf
    void getWantedPosition()const; // _ZNK20LookControlComponent17getWantedPositionEv
    void getWantedRotation()const; // _ZNK20LookControlComponent17getWantedRotationEv
    void setLookAtPosition(Actor const*, float, float); // _ZN20LookControlComponent17setLookAtPositionEPK5Actorff
    void setLookAtPosition(Vec3 const&, float, float); // _ZN20LookControlComponent17setLookAtPositionERK4Vec3ff
    void setLookAtRotation(Vec3 const&, float, float); // _ZN20LookControlComponent17setLookAtRotationERK4Vec3ff
    void update(Mob &); // _ZN20LookControlComponent6updateER3Mob
};
