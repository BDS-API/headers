#pragma once



class BalloonComponent {

public:
    static long MAX_BALLOON_RANGE;
    static long FENCE_BALLOON_RANGE;
    static std::string ATTACHED_TAG;
    static std::string MAX_HEIGHT_TAG;
    static std::string SHOULD_DROP_TAG;

    ~BalloonComponent();
    void getBalloonForActor(Actor const&);
    void onRemoved(Actor &, bool);
    void integrate(Actor &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    BalloonComponent();
    void shouldPop(Actor &, bool &);
    BalloonComponent(BalloonComponent &&);
    void getAttachedActor(Actor &);
    void addAdditionalSaveData(CompoundTag &);
    void detach(Actor &);
    void getMaxHeight()const;
    void _integrateBalloon(Vec3 &, Vec3 *, Vec3 const&, DistanceConstraint *);
    void computeMaxHeight(Actor &);
    void setAttachedActor(Actor &, Actor *);
};
