#pragma once

class EndPodiumFeature : Feature {

public:
    static long EndPodiumFeature::PODIUM_RADIUS;
    static long EndPodiumFeature::PODIUM_PILLAR_HEIGHT;
    static long EndPodiumFeature::RIM_RADIUS;
    static long EndPodiumFeature::CORNER_ROUNDING;
    static long EndPodiumFeature::END_PODIUM_LOCATION;
    static long EndPodiumFeature::END_PODIUM_CHUNK_POSITION;

    virtual ~EndPodiumFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void EndPodiumFeature(bool);
};
