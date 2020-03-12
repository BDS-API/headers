#pragma once



class TransformationComponent {

public:
    void setDelayTicks(int);
    void reloadComponent(Actor &);
    void maintainOldData(Actor &, Actor &, TransformationDescription const&, ActorUniqueID const&, Level const&);
    void initFromDefinition(Actor &);
    TransformationComponent();
    TransformationComponent(TransformationComponent &&);
    void transformIfAble(Actor &);
    void initFromDefinition(Actor &, TransformationDescription const&);
    void getDelayTicks()const;
};
