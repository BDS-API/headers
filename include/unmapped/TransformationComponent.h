#pragma once

#include "../bedrock/description/component/TransformationDescription.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/level/Level.h"
#include "../bedrock/actor/Actor.h"


class TransformationComponent {

public:
    TransformationComponent();
    void reloadComponent(Actor &);
    void initFromDefinition(Actor &);
    TransformationComponent(TransformationComponent &&);
    void initFromDefinition(Actor &, TransformationDescription const&);
    void getDelayTicks()const;
    void setDelayTicks(int);
    void transformIfAble(Actor &);
    void maintainOldData(Actor &, Actor &, TransformationDescription const&, ActorUniqueID const&, Level const&);
};
