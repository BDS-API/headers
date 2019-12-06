#pragma once

class ShieldItemUtils {

public:
    static long ShieldItemUtils::mAlwaysBlockableDamageCauses;


    bool isBlockedDamageCause(ActorDamageSource const&);
};
