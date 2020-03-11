#pragma once

#include "../bedrock/util/Vec3.h"


class PlayerRespawnRandomizer {

public:

    PlayerRespawnRandomizer();
//  void init(unsigned int, GeneratorType const&); //TODO: incomplete function definition
    void performPrimaryJump(Vec3 const&, bool);
    void resetSecondary();
    void getRandomizedPosition(Vec3 &);
    bool isPrimaryExhausted()const;
    bool isSecondaryExhausted()const;
    bool isCompletelyExhausted()const;
    void getRadius()const;
    void getRadiusSquared()const;
    void getLongJumpCount()const;
    void getShortJumpCount()const;
    void resetPrimary();
    void getPrimaryOffset()const;
};
