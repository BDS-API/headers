#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/actor/unmapped/ActorUniqueID"
#include "../bedrock/description/component/TransformationDescription"
#include "../bedrock/level/Level"


class TransformationComponent {

public:

    TransformationComponent(TransformationComponent&&);
    TransformationComponent(void);
    void initFromDefinition(Actor &);
    void initFromDefinition(Actor &, TransformationDescription const&);
    void reloadComponent(Actor &);
    void transformIfAble(Actor &);
    void getDelayTicks()const;
    void setDelayTicks(int);
    void maintainOldData(Actor &, Actor &, TransformationDescription const&, ActorUniqueID const&, Level const&);
};
