#pragma once

#include "../bedrock/util/Vec3.h"


class PlayerRespawnRandomizer {

public:
    PlayerRespawnRandomizer();
    bool isCompletelyExhausted()const;
    void getLongJumpCount()const;
    void resetPrimary();
    void getRadius()const;
    void getPrimaryOffset()const;
    void performPrimaryJump(Vec3 const&, bool);
    void getRadiusSquared()const;
    void resetSecondary();
    void getRandomizedPosition(Vec3 &);
    bool isSecondaryExhausted()const;
    void getShortJumpCount()const;
    bool isPrimaryExhausted()const;
//  void init(unsigned int, GeneratorType const&); //TODO: incomplete function definition
};
