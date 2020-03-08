#pragma once

#include "../bedrock/actor/damagesource/ActorDamageSource"


class ShieldItemUtils {

public:
    static long mAlwaysBlockableDamageCauses;


    bool isBlockedDamageCause(ActorDamageSource const&);
};
