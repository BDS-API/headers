#pragma once

class BoneAnimation {

public:

    void setName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getBoneName(void)const;
    void animate(RenderParams &, BoneOrientation &, float)const;
    void addAnimationChannel(BoneTransformType);
    void setRotationRelativeMode(BoneAnimationRelativeMode);
    void getAnimationChannels(void)const;
    void getAnimationChannels(void);
    void toJson(Json::Value &)const;
    void getMaxKeyFrameTime(void)const;
    void BoneAnimation(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void BoneAnimation(BoneAnimation const&);
};
