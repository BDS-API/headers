#pragma once

#include "../bedrock/description/component/TransformationDescription.h"
#include "../bedrock/actor/Actor.h"
#include "./TransformationComponent.h"
#include "../bedrock/level/Level.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"


class TransformationComponent {

public:

    TransformationComponent(TransformationComponent &&);
    TransformationComponent();
    void initFromDefinition(Actor &);
    void initFromDefinition(Actor &, TransformationDescription const&);
    void reloadComponent(Actor &);
    void transformIfAble(Actor &);
    void getDelayTicks()const;
    void setDelayTicks(int);
    void maintainOldData(Actor &, Actor &, TransformationDescription const&, ActorUniqueID const&, Level const&);
};
