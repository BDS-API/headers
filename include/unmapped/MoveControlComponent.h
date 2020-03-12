#pragma once

#include <memory>


class MoveControlComponent {

public:
    void getSpeedModifier()const;
    void getMaxTurn()const;
    void setSpeedModifier(float);
    void update(Mob &);
    MoveControlComponent();
    void getWantedPosition();
    void setMaxTurn(float);
    ~MoveControlComponent();
    void getShouldBreach()const;
    void setWantedPosition(Mob &, Vec3 const&, float);
    void getHasWantedPosition()const;
    void _setWantedPosition(Vec3 const&);
    void setInternalType(std::unique_ptr<MoveControl>);
    void setShouldBreach(bool);
    void setHasWantedPosition(bool);
    void initializeFromDefinition(Mob &, MoveControlDescription *);
    MoveControlComponent(MoveControlComponent &&);
};
