#pragma once



class CompassSpriteCalculator {

public:
    CompassSpriteCalculator(); // _ZN23CompassSpriteCalculatorC2Ev
    void getFrame()const; // _ZNK23CompassSpriteCalculator8getFrameEv
    void update(Actor &, bool); // _ZN23CompassSpriteCalculator6updateER5Actorb
    void updateFromPosition(BlockSource const&, float, float, float, bool, bool); // _ZN23CompassSpriteCalculator18updateFromPositionERK11BlockSourcefffbb
    void calculateFrame(BlockSource const&, Vec3 const&, float); // _ZN23CompassSpriteCalculator14calculateFrameERK11BlockSourceRK4Vec3f
    void calculateFrame(BlockSource const&, float, float, float); // _ZN23CompassSpriteCalculator14calculateFrameERK11BlockSourcefff
};
