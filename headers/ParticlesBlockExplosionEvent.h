#pragma once

class ParticlesBlockExplosionEvent {

public:

    void ParticlesBlockExplosionEvent(Vec3 const&, float);
    void addExplodePosition(Vec3 const&);
    void save(void)const;
    void load(CompoundTag const&);
};
