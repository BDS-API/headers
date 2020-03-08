#pragma once

#include "../json/Value"


class BoneAnimation {

public:

    void setName(std::string const&);
    void getBoneName()const;
    void animate(RenderParams &, BoneOrientation &, float)const;
    void addAnimationChannel(BoneTransformType);
    void setRotationRelativeMode(BoneAnimationRelativeMode);
    void getAnimationChannels()const;
    void getAnimationChannels();
    void toJson(Json::Value &)const;
    void getMaxKeyFrameTime()const;
    BoneAnimation(std::string const&);
    BoneAnimation(BoneAnimation const&);
};
