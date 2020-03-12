#pragma once

#include "../bedrock/util/Random.h"
#include "../bedrock/util/BlockPos.h"


namespace RotationUtil {

//  void getRotated(Rotation, Rotation); //TODO: incomplete function definition
    void getShuffledRotations(Random &);
    void getRandomRotation(Random &);
//  void rotate(BlockPos const&, Rotation); //TODO: incomplete function definition
//  void rotate(Rotation, unsigned char); //TODO: incomplete function definition
};
