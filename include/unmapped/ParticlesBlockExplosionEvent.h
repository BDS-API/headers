#pragma once



class ParticlesBlockExplosionEvent {

public:
    ParticlesBlockExplosionEvent(Vec3 const&, float);
    void load(CompoundTag const&);
    ~ParticlesBlockExplosionEvent();
    void addExplodePosition(Vec3 const&);
    void save()const;
};
