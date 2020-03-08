#pragma once

#include "../bedrock/nbt/CompoundTag"


class ParticlesBlockExplosionEvent {

public:

    ParticlesBlockExplosionEvent(Vec3 const&, float);
    void addExplodePosition(Vec3 const&);
    void save(void)const;
    void load(CompoundTag const&);
};
