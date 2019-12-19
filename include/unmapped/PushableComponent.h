#pragma once

class PushableComponent {

public:

    PushableComponent(PushableComponent&&);
    void initFromDefinition(Actor &);
    void initFromDefinition(Actor &, PushableDescription &);
    void push(Actor &, Actor &, bool);
    void _calculatePushVectorBoat(Actor &, Actor &, bool);
    void _calculatePushVectorMinecart(Actor &, Actor &, bool);
    void _calculatePushVectorBase(Actor &, Actor &, bool);
    void push(Actor &, Vec3 const&);
    bool isPushable(void);
    bool isPushableByPiston(void);
};
