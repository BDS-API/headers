#pragma once

#include <string>


class BoneAnimation {

public:
    void getAnimationChannels();
//  void addAnimationChannel(BoneTransformType); //TODO: incomplete function definition
    void getBoneName()const;
    ~BoneAnimation();
//  void setRotationRelativeMode(BoneAnimationRelativeMode); //TODO: incomplete function definition
    void getMaxKeyFrameTime()const;
    void toJson(Json::Value &)const;
    void getAnimationChannels()const;
    void animate(RenderParams &, BoneOrientation &, float)const;
    BoneAnimation(BoneAnimation const&);
    void setName(std::string const&);
    BoneAnimation(std::string const&);
};
