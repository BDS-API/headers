#pragma once

#include "./BoneAnimation.h"
#include "../json/Value.h"
#include "./BoneOrientation.h"
#include "./RenderParams.h"
#include <string>


class BoneAnimation {

public:

    void setName(std::string const&);
    void getBoneName()const;
    void animate(RenderParams &, BoneOrientation &, float)const;
//  void addAnimationChannel(BoneTransformType); //TODO: incomplete function definition
//  void setRotationRelativeMode(BoneAnimationRelativeMode); //TODO: incomplete function definition
    void getAnimationChannels()const;
    void getAnimationChannels();
    void toJson(Json::Value &)const;
    void getMaxKeyFrameTime()const;
    ~BoneAnimation();
    BoneAnimation(std::string const&);
    BoneAnimation(BoneAnimation const&);
};
