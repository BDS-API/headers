#pragma once

#include "../bedrock/actor/damagesource/ActorDamageSource.h"


namespace ShieldItemUtils {

    static long mAlwaysBlockableDamageCauses;

    bool isBlockedDamageCause(ActorDamageSource const&);
};
