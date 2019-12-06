#pragma once

class TransformationComponent {

public:

    void TransformationComponent(TransformationComponent&&);
    void TransformationComponent(void);
    void initFromDefinition(Actor &);
    void initFromDefinition(Actor &, TransformationDescription const&);
    void reloadComponent(Actor &);
    void transformIfAble(Actor &);
    void getDelayTicks(void)const;
    void setDelayTicks(int);
    void maintainOldData(Actor &, Actor &, TransformationDescription const&, ActorUniqueID const&, Level const&);
};
