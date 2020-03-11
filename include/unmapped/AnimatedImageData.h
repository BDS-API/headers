#pragma once

#include "./AnimatedImageData.h"
#include "../mce/Image.h"


class AnimatedImageData {

public:

    ~AnimatedImageData();
//  AnimatedImageData(persona::AnimatedTextureType, mce::Image const&, float); //TODO: incomplete function definition
    AnimatedImageData(AnimatedImageData const&);
};
