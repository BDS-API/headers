#pragma once



class ParticlesBlockExplosionEvent {

public:
    ParticlesBlockExplosionEvent(Vec3 const&, float); // _ZN28ParticlesBlockExplosionEventC2ERK4Vec3f
    ~ParticlesBlockExplosionEvent(); // _ZN28ParticlesBlockExplosionEventD2Ev
    void addExplodePosition(Vec3 const&); // _ZN28ParticlesBlockExplosionEvent18addExplodePositionERK4Vec3
    void save()const; // _ZNK28ParticlesBlockExplosionEvent4saveEv
    void load(CompoundTag const&); // _ZN28ParticlesBlockExplosionEvent4loadERK11CompoundTag
};
