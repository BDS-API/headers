#pragma once



class ClockSpriteCalculator {

public:
    void calculateFrame(Actor const&);
    void calculateFrame(BlockSource const&, Vec3 const&);
    void update(BlockSource const&, Vec3 const&, bool);
    void getFrame()const;
    ClockSpriteCalculator();
    void update(Actor &, bool);
};
