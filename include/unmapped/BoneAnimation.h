#pragma once

#include "RenderParams.h"
#include "BoneOrientation.h"
#include <string>
#include "../json/Value.h"


class BoneAnimation {

public:
    void getMaxKeyFrameTime()const;
    void getBoneName()const;
    BoneAnimation(std::string const&);
    void getAnimationChannels();
//  void setRotationRelativeMode(BoneAnimationRelativeMode); //TODO: incomplete function definition
    void setName(std::string const&);
    void toJson(Json::Value &)const;
//  void addAnimationChannel(BoneTransformType); //TODO: incomplete function definition
    void animate(RenderParams &, BoneOrientation &, float)const;
    BoneAnimation(BoneAnimation const&);
    void getAnimationChannels()const;
    ~BoneAnimation();
};
