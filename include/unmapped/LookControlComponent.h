#pragma once

#include <memory>


class LookControlComponent {

public:
    void setLookAtPosition(Vec3 const&, float, float);
    void setLookAtPosition(Actor const*, float, float);
    void update(Mob &);
    LookControlComponent();
    void getYMax()const;
    void setHasWantedRotation(bool);
    void initialize(Mob &);
    void getHasWantedRotation()const;
    ~LookControlComponent();
    void getXMax()const;
    void setLookAtRotation(Vec3 const&, float, float);
    void getWantedRotation()const;
    void setHasWantedPosition(bool);
    void getHasWantedPosition()const;
    void setInternalType(std::unique_ptr<LookControl>);
    void getWantedPosition()const;
    LookControlComponent(LookControlComponent &&);
    void setYMax(float);
};
