#pragma once

#include "../Actor"


class ActorClassTree {

public:

    void getEntityTypeIdLegacy(ActorType);
    bool isMobLegacy(ActorType);
    bool isMob(ActorType);
    bool isTypeInstanceOf(ActorType, ActorType);
    bool isInstanceOf(Actor const&, ActorType);
    bool isOfType(ActorType, ActorType);
    bool hasCategory(ActorCategory const&, ActorCategory);
    bool isHangingEntity(Actor const&);
};
