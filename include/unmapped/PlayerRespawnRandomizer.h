#pragma once



class PlayerRespawnRandomizer {

public:
    bool isPrimaryExhausted()const;
    bool isCompletelyExhausted()const;
//  void init(unsigned int, GeneratorType const&); //TODO: incomplete function definition
    void getRadiusSquared()const;
    bool isSecondaryExhausted()const;
    void performPrimaryJump(Vec3 const&, bool);
    void getShortJumpCount()const;
    void resetSecondary();
    void getPrimaryOffset()const;
    void getRadius()const;
    PlayerRespawnRandomizer();
    void getRandomizedPosition(Vec3 &);
    void resetPrimary();
    void getLongJumpCount()const;
};
