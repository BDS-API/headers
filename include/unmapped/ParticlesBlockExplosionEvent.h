#pragma once

#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/util/Vec3.h"


class ParticlesBlockExplosionEvent {

public:
    void addExplodePosition(Vec3 const&);
    void save()const;
    ~ParticlesBlockExplosionEvent();
    void load(CompoundTag const&);
    ParticlesBlockExplosionEvent(Vec3 const&, float);
};
