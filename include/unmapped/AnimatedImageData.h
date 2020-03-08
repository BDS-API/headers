#pragma once

#include "../mce/Image"


class AnimatedImageData {

public:

    AnimatedImageData(persona::AnimatedTextureType, mce::Image const&, float);
    AnimatedImageData(AnimatedImageData const&);
};
