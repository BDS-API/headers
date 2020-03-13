#pragma once



class BalloonComponent {

public:
    static long MAX_BALLOON_RANGE;
    static long FENCE_BALLOON_RANGE;
    static std::string ATTACHED_TAG;
    static std::string MAX_HEIGHT_TAG;
    static std::string SHOULD_DROP_TAG;

    BalloonComponent(); // _ZN16BalloonComponentC2Ev
    BalloonComponent(BalloonComponent &&); // _ZN16BalloonComponentC2EOS_
    ~BalloonComponent(); // _ZN16BalloonComponentD2Ev
    void onRemoved(Actor &, bool); // _ZN16BalloonComponent9onRemovedER5Actorb
    void getAttachedActor(Actor &); // _ZN16BalloonComponent16getAttachedActorER5Actor
    void setAttachedActor(Actor &, Actor *); // _ZN16BalloonComponent16setAttachedActorER5ActorPS0_
    void detach(Actor &); // _ZN16BalloonComponent6detachER5Actor
    void addAdditionalSaveData(CompoundTag &); // _ZN16BalloonComponent21addAdditionalSaveDataER11CompoundTag
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN16BalloonComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
    void getMaxHeight()const; // _ZNK16BalloonComponent12getMaxHeightEv
    void getBalloonForActor(Actor const&); // _ZN16BalloonComponent18getBalloonForActorERK5Actor
    void shouldPop(Actor &, bool &); // _ZN16BalloonComponent9shouldPopER5ActorRb
    void integrate(Actor &); // _ZN16BalloonComponent9integrateER5Actor
    void _integrateBalloon(Vec3 &, Vec3 *, Vec3 const&, DistanceConstraint *); // _ZN16BalloonComponent17_integrateBalloonER4Vec3PS0_RKS0_P18DistanceConstraint
    void computeMaxHeight(Actor &); // _ZN16BalloonComponent16computeMaxHeightER5Actor
};
