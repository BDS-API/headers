#pragma once



namespace RotationUtil {

//  void getRotated(Rotation, Rotation); //TODO: incomplete function definition // _ZN12RotationUtil10getRotatedE8RotationS0_
//  void rotate(Rotation, unsigned char); //TODO: incomplete function definition // _ZN12RotationUtil6rotateE8Rotationh
//  void rotate(BlockPos const&, Rotation); //TODO: incomplete function definition // _ZN12RotationUtil6rotateERK8BlockPos8Rotation
    void getShuffledRotations(Random &); // _ZN12RotationUtil20getShuffledRotationsER6Random
    void getRandomRotation(Random &); // _ZN12RotationUtil17getRandomRotationER6Random
};
