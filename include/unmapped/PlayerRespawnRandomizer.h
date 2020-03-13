#pragma once



class PlayerRespawnRandomizer {

public:
    PlayerRespawnRandomizer(); // _ZN23PlayerRespawnRandomizerC2Ev
//  void init(unsigned int, GeneratorType const&); //TODO: incomplete function definition // _ZN23PlayerRespawnRandomizer4initEjRK13GeneratorType
    void performPrimaryJump(Vec3 const&, bool); // _ZN23PlayerRespawnRandomizer18performPrimaryJumpERK4Vec3b
    void resetSecondary(); // _ZN23PlayerRespawnRandomizer14resetSecondaryEv
    void getRandomizedPosition(Vec3 &); // _ZN23PlayerRespawnRandomizer21getRandomizedPositionER4Vec3
    bool isPrimaryExhausted()const; // _ZNK23PlayerRespawnRandomizer18isPrimaryExhaustedEv
    bool isSecondaryExhausted()const; // _ZNK23PlayerRespawnRandomizer20isSecondaryExhaustedEv
    bool isCompletelyExhausted()const; // _ZNK23PlayerRespawnRandomizer21isCompletelyExhaustedEv
    void getRadius()const; // _ZNK23PlayerRespawnRandomizer9getRadiusEv
    void getRadiusSquared()const; // _ZNK23PlayerRespawnRandomizer16getRadiusSquaredEv
    void getLongJumpCount()const; // _ZNK23PlayerRespawnRandomizer16getLongJumpCountEv
    void getShortJumpCount()const; // _ZNK23PlayerRespawnRandomizer17getShortJumpCountEv
    void resetPrimary(); // _ZN23PlayerRespawnRandomizer12resetPrimaryEv
    void getPrimaryOffset()const; // _ZNK23PlayerRespawnRandomizer16getPrimaryOffsetEv
};
