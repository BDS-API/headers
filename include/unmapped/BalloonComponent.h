#pragma once

#include "../bedrock/nbt/CompoundTag.h"
#include "DistanceConstraint.h"
#include <string>
#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/Actor.h"
#include "DataLoadHelper.h"


class BalloonComponent {

public:
    static long MAX_BALLOON_RANGE;
    static long FENCE_BALLOON_RANGE;
    static std::string ATTACHED_TAG;
    static std::string MAX_HEIGHT_TAG;
    static std::string SHOULD_DROP_TAG;

    void setAttachedActor(Actor &, Actor *);
    BalloonComponent(BalloonComponent &&);
    void getAttachedActor(Actor &);
    void _integrateBalloon(Vec3 &, Vec3 *, Vec3 const&, DistanceConstraint *);
    BalloonComponent();
    void onRemoved(Actor &, bool);
    void detach(Actor &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void shouldPop(Actor &, bool &);
    void integrate(Actor &);
    ~BalloonComponent();
    void computeMaxHeight(Actor &);
    void getMaxHeight()const;
    void getBalloonForActor(Actor const&);
    void addAdditionalSaveData(CompoundTag &);
};
