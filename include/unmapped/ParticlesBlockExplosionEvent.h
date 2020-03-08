#pragma once

#include "../bedrock/util/Vec3"
#include "../bedrock/nbt/CompoundTag"


class ParticlesBlockExplosionEvent {

public:

    ParticlesBlockExplosionEvent(Vec3 const&, float);
    void addExplodePosition(Vec3 const&);
    void save()const;
    void load(CompoundTag const&);
};
