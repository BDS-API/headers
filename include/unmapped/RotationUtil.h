#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/util/BlockPos"


class RotationUtil {

public:

    void getRotated(Rotation, Rotation);
    void rotate(Rotation, unsigned char);
    void rotate(BlockPos const&, Rotation);
    void getShuffledRotations(Random &);
    void getRandomRotation(Random &);
};
