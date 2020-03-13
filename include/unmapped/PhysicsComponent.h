#pragma once



class PhysicsComponent {

public:
    void setAffectedByGravity(Actor &, bool); // _ZN16PhysicsComponent20setAffectedByGravityER5Actorb
    bool isAffectedByGravity(Actor const&)const; // _ZNK16PhysicsComponent19isAffectedByGravityERK5Actor
    void setHasCollision(Actor &, bool); // _ZN16PhysicsComponent15setHasCollisionER5Actorb
    PhysicsComponent(PhysicsComponent &&); // _ZN16PhysicsComponentC2EOS_
};
