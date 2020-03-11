#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/nbt/CompoundTag.h"


class ParticlesBlockExplosionEvent {

public:

    ParticlesBlockExplosionEvent(Vec3 const&, float);
    ~ParticlesBlockExplosionEvent();
    void addExplodePosition(Vec3 const&);
    void save()const;
    void load(CompoundTag const&);
};
