#pragma once



class PushableComponent {

public:
    PushableComponent(PushableComponent &&); // _ZN17PushableComponentC2EOS_
    void initFromDefinition(Actor &); // _ZN17PushableComponent18initFromDefinitionER5Actor
    void initFromDefinition(Actor &, PushableDescription &); // _ZN17PushableComponent18initFromDefinitionER5ActorR19PushableDescription
    void push(Actor &, Actor &, bool); // _ZN17PushableComponent4pushER5ActorS1_b
    void _calculatePushVectorBoat(Actor &, Actor &, bool); // _ZN17PushableComponent24_calculatePushVectorBoatER5ActorS1_b
    void _calculatePushVectorMinecart(Actor &, Actor &, bool); // _ZN17PushableComponent28_calculatePushVectorMinecartER5ActorS1_b
    void _calculatePushVectorBase(Actor &, Actor &, bool); // _ZN17PushableComponent24_calculatePushVectorBaseER5ActorS1_b
    void push(Actor &, Vec3 const&); // _ZN17PushableComponent4pushER5ActorRK4Vec3
    bool isPushable(); // _ZN17PushableComponent10isPushableEv
    bool isPushableByPiston(); // _ZN17PushableComponent18isPushableByPistonEv
};
