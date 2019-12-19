#pragma once

class ShieldItemUtils {

public:
    static long mAlwaysBlockableDamageCauses;


    bool isBlockedDamageCause(ActorDamageSource const&);
};
