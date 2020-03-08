#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/util/Vec3"


class BalloonComponent {

public:
    static long MAX_BALLOON_RANGE;
    static long FENCE_BALLOON_RANGE;
    static long ATTACHED_TAG[abi:cxx11];
    static long MAX_HEIGHT_TAG[abi:cxx11];
    static long SHOULD_DROP_TAG[abi:cxx11];


    BalloonComponent(void);
    BalloonComponent(BalloonComponent&&);
    void onRemoved(Actor &, bool);
    void getAttachedActor(Actor &);
    void setAttachedActor(Actor &, Actor*);
    void detach(Actor &);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getMaxHeight()const;
    void getBalloonForActor(Actor const&);
    void shouldPop(Actor &, bool &);
    void integrate(Actor &);
    void _integrateBalloon(Vec3 &, Vec3*, Vec3 const&, DistanceConstraint *);
    void computeMaxHeight(Actor &);
};
