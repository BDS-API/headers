#pragma once

class LookControlComponent {

public:

    void LookControlComponent(LookControlComponent&&);
    void LookControlComponent(void);
    void initialize(Mob &);
    void setInternalType(std::unique_ptr<LookControl, std::default_delete<LookControl>>);
    void getHasWantedPosition(void)const;
    void setHasWantedPosition(bool);
    void getHasWantedRotation(void)const;
    void setHasWantedRotation(bool);
    void getXMax(void)const;
    void getYMax(void)const;
    void setYMax(float);
    void getWantedPosition(void)const;
    void getWantedRotation(void)const;
    void setLookAtPosition(Actor const*, float, float);
    void setLookAtPosition(Vec3 const&, float, float);
    void setLookAtRotation(Vec3 const&, float, float);
    void update(Mob &);
};
