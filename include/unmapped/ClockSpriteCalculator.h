#pragma once

class ClockSpriteCalculator {

public:

    ClockSpriteCalculator(void);
    void getFrame(void)const;
    void update(Actor &, bool);
    void update(BlockSource const&, Vec3 const&, bool);
    void calculateFrame(Actor const&);
    void calculateFrame(BlockSource const&, Vec3 const&);
};
