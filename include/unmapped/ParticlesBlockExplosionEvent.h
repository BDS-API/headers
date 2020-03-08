#pragma once

#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/util/Vec3"


class ParticlesBlockExplosionEvent {

public:

    ParticlesBlockExplosionEvent(Vec3 const&, float);
    void addExplodePosition(Vec3 const&);
    void save()const;
    void load(CompoundTag const&);
};
