#pragma once

#include "../bedrock/util/Vec3.h"
#include "./DataLoadHelper.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "./DistanceConstraint.h"
#include "../bedrock/actor/Actor.h"
#include "./BalloonComponent.h"


class BalloonComponent {

public:
    static long MAX_BALLOON_RANGE;
    static long FENCE_BALLOON_RANGE;
    static std::string ATTACHED_TAG;
    static std::string MAX_HEIGHT_TAG;
    static std::string SHOULD_DROP_TAG;


    BalloonComponent();
    BalloonComponent(BalloonComponent &&);
    ~BalloonComponent();
    void onRemoved(Actor &, bool);
    void getAttachedActor(Actor &);
    void setAttachedActor(Actor &, Actor *);
    void detach(Actor &);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getMaxHeight()const;
    void getBalloonForActor(Actor const&);
    void shouldPop(Actor &, bool &);
    void integrate(Actor &);
    void _integrateBalloon(Vec3 &, Vec3 *, Vec3 const&, DistanceConstraint *);
    void computeMaxHeight(Actor &);
};
