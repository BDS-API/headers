#pragma once



class ClockSpriteCalculator {

public:
    ClockSpriteCalculator(); // _ZN21ClockSpriteCalculatorC2Ev
    void getFrame()const; // _ZNK21ClockSpriteCalculator8getFrameEv
    void update(Actor &, bool); // _ZN21ClockSpriteCalculator6updateER5Actorb
    void update(BlockSource const&, Vec3 const&, bool); // _ZN21ClockSpriteCalculator6updateERK11BlockSourceRK4Vec3b
    void calculateFrame(Actor const&); // _ZN21ClockSpriteCalculator14calculateFrameERK5Actor
    void calculateFrame(BlockSource const&, Vec3 const&); // _ZN21ClockSpriteCalculator14calculateFrameERK11BlockSourceRK4Vec3
};
