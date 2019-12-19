#pragma once

class BoneAnimation {

public:

    void setName(std::string const&);
    void getBoneName(void)const;
    void animate(RenderParams &, BoneOrientation &, float)const;
    void addAnimationChannel(BoneTransformType);
    void setRotationRelativeMode(BoneAnimationRelativeMode);
    void getAnimationChannels(void)const;
    void getAnimationChannels(void);
    void toJson(Json::Value &)const;
    void getMaxKeyFrameTime(void)const;
    BoneAnimation(std::string const&);
    BoneAnimation(BoneAnimation const&);
};
