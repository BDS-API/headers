#pragma once

#include "../bedrock/description/component/MoveControlDescription.h"
#include "../bedrock/actor/Mob.h"
#include "../bedrock/util/Vec3.h"
#include <memory>
#include "../bedrock/control/MoveControl.h"


class MoveControlComponent {

public:
    void setInternalType(std::unique_ptr<MoveControl>);
    void getHasWantedPosition()const;
    ~MoveControlComponent();
    MoveControlComponent();
    void initializeFromDefinition(Mob &, MoveControlDescription *);
    void setShouldBreach(bool);
    void _setWantedPosition(Vec3 const&);
    MoveControlComponent(MoveControlComponent &&);
    void getWantedPosition();
    void update(Mob &);
    void setWantedPosition(Mob &, Vec3 const&, float);
    void setMaxTurn(float);
    void getShouldBreach()const;
    void setHasWantedPosition(bool);
    void getMaxTurn()const;
    void setSpeedModifier(float);
    void getSpeedModifier()const;
};
