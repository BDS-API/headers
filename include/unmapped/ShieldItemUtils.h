#pragma once

#include "../bedrock/actor/damagesource/ActorDamageSource.h"


class ShieldItemUtils {

public:
    static long mAlwaysBlockableDamageCauses;


    bool isBlockedDamageCause(ActorDamageSource const&);
};
