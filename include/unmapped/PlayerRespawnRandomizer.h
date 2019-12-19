#pragma once

class PlayerRespawnRandomizer {

public:

    PlayerRespawnRandomizer(void);
    void init(unsigned int, GeneratorType const&);
    void performPrimaryJump(Vec3 const&, bool);
    void resetSecondary(void);
    void getRandomizedPosition(Vec3 &);
    bool isPrimaryExhausted(void)const;
    bool isSecondaryExhausted(void)const;
    bool isCompletelyExhausted(void)const;
    void getRadius(void)const;
    void getRadiusSquared(void)const;
    void getLongJumpCount(void)const;
    void getShortJumpCount(void)const;
    void resetPrimary(void);
    void getPrimaryOffset(void)const;
};
