#pragma once



class PhysicsComponent {

public:
    void setAffectedByGravity(Actor &, bool);
    void setHasCollision(Actor &, bool);
    bool isAffectedByGravity(Actor const&)const;
    PhysicsComponent(PhysicsComponent &&);
};
