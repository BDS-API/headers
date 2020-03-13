#pragma once



class TransformationComponent {

public:
    TransformationComponent(TransformationComponent &&); // _ZN23TransformationComponentC2EOS_
    TransformationComponent(); // _ZN23TransformationComponentC2Ev
    void initFromDefinition(Actor &); // _ZN23TransformationComponent18initFromDefinitionER5Actor
    void initFromDefinition(Actor &, TransformationDescription const&); // _ZN23TransformationComponent18initFromDefinitionER5ActorRK25TransformationDescription
    void reloadComponent(Actor &); // _ZN23TransformationComponent15reloadComponentER5Actor
    void transformIfAble(Actor &); // _ZN23TransformationComponent15transformIfAbleER5Actor
    void getDelayTicks()const; // _ZNK23TransformationComponent13getDelayTicksEv
    void setDelayTicks(int); // _ZN23TransformationComponent13setDelayTicksEi
    void maintainOldData(Actor &, Actor &, TransformationDescription const&, ActorUniqueID const&, Level const&); // _ZN23TransformationComponent15maintainOldDataER5ActorS1_RK25TransformationDescriptionRK13ActorUniqueIDRK5Level
};
