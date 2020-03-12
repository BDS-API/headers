#pragma once



class PushableComponent {

public:
    void push(Actor &, Actor &, bool);
    void _calculatePushVectorBase(Actor &, Actor &, bool);
    void initFromDefinition(Actor &);
    bool isPushableByPiston();
    bool isPushable();
    void push(Actor &, Vec3 const&);
    PushableComponent(PushableComponent &&);
    void _calculatePushVectorMinecart(Actor &, Actor &, bool);
    void _calculatePushVectorBoat(Actor &, Actor &, bool);
    void initFromDefinition(Actor &, PushableDescription &);
};
