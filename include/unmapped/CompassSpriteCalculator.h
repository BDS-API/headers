#pragma once



class CompassSpriteCalculator {

public:
    void getFrame()const;
    CompassSpriteCalculator();
    void updateFromPosition(BlockSource const&, float, float, float, bool, bool);
    void calculateFrame(BlockSource const&, Vec3 const&, float);
    void calculateFrame(BlockSource const&, float, float, float);
    void update(Actor &, bool);
};
