#pragma once

#include <string>


class BoneAnimation {

public:
    void setName(std::string const&); // _ZN13BoneAnimation7setNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getBoneName()const; // _ZNK13BoneAnimation11getBoneNameEv
    void animate(RenderParams &, BoneOrientation &, float)const; // _ZNK13BoneAnimation7animateER12RenderParamsR15BoneOrientationf
//  void addAnimationChannel(BoneTransformType); //TODO: incomplete function definition // _ZN13BoneAnimation19addAnimationChannelE17BoneTransformType
//  void setRotationRelativeMode(BoneAnimationRelativeMode); //TODO: incomplete function definition // _ZN13BoneAnimation23setRotationRelativeModeE25BoneAnimationRelativeMode
    void getAnimationChannels()const; // _ZNK13BoneAnimation20getAnimationChannelsEv
    void getAnimationChannels(); // _ZN13BoneAnimation20getAnimationChannelsEv
    void toJson(Json::Value &)const; // _ZNK13BoneAnimation6toJsonERN4Json5ValueE
    void getMaxKeyFrameTime()const; // _ZNK13BoneAnimation18getMaxKeyFrameTimeEv
    ~BoneAnimation(); // _ZN13BoneAnimationD2Ev
    BoneAnimation(std::string const&); // _ZN13BoneAnimationC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    BoneAnimation(BoneAnimation const&); // _ZN13BoneAnimationC2ERKS_
};
