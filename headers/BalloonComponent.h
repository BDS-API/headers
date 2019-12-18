#pragma once

class BalloonComponent {

public:
    static long BalloonComponent::MAX_BALLOON_RANGE;
    static long BalloonComponent::FENCE_BALLOON_RANGE;
    static long BalloonComponent::ATTACHED_TAG[abi:cxx11];
    static long BalloonComponent::MAX_HEIGHT_TAG[abi:cxx11];
    static long BalloonComponent::SHOULD_DROP_TAG[abi:cxx11];


    void BalloonComponent(void);
    void BalloonComponent(BalloonComponent&&);
    void onRemoved(Actor &, bool);
    void getAttachedActor(Actor &);
    void setAttachedActor(Actor &, Actor*);
    void detach(Actor &);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getMaxHeight(void)const;
    void getBalloonForActor(Actor const&);
    void shouldPop(Actor &, bool &);
    void integrate(Actor &);
    void _integrateBalloon(Vec3 &, Vec3*, Vec3 const&, DistanceConstraint *);
    void computeMaxHeight(Actor &);
};
