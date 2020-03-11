#pragma once

#include "../bedrock/util/Vec3.h"
#include <memory>
#include "../bedrock/control/MoveControl.h"
#include "../bedrock/description/component/MoveControlDescription.h"
#include "../bedrock/actor/Mob.h"
#include "./MoveControlComponent.h"


class MoveControlComponent {

public:

    ~MoveControlComponent();
    MoveControlComponent(MoveControlComponent &&);
    MoveControlComponent();
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
