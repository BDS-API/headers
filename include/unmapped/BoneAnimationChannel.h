#pragma once



class BoneAnimationChannel {

public:
//  BoneAnimationChannel(BoneTransformType); //TODO: incomplete function definition // _ZN20BoneAnimationChannelC2E17BoneTransformType
//  BoneAnimationChannel(BoneTransformType, ExpressionNode const&); //TODO: incomplete function definition // _ZN20BoneAnimationChannelC2E17BoneTransformTypeRK14ExpressionNode
//  BoneAnimationChannel(BoneTransformType, ExpressionNode const&, ExpressionNode const&, ExpressionNode const&); //TODO: incomplete function definition // _ZN20BoneAnimationChannelC2E17BoneTransformTypeRK14ExpressionNodeS3_S3_
    void addKeyFrame(float); // _ZN20BoneAnimationChannel11addKeyFrameEf
    void getKeyFrames()const; // _ZNK20BoneAnimationChannel12getKeyFramesEv
    void getKeyFrames(); // _ZN20BoneAnimationChannel12getKeyFramesEv
    void sortKeyFrames(); // _ZN20BoneAnimationChannel13sortKeyFramesEv
    void toJson(Json::Value &)const; // _ZNK20BoneAnimationChannel6toJsonERN4Json5ValueE
    void animate(RenderParams &, BoneOrientation &, float)const; // _ZNK20BoneAnimationChannel7animateER12RenderParamsR15BoneOrientationf
    void getMaxKeyFrameTime()const; // _ZNK20BoneAnimationChannel18getMaxKeyFrameTimeEv
    BoneAnimationChannel(BoneAnimationChannel &&); // _ZN20BoneAnimationChannelC2EOS_
    ~BoneAnimationChannel(); // _ZN20BoneAnimationChannelD2Ev
    BoneAnimationChannel(BoneAnimationChannel const&); // _ZN20BoneAnimationChannelC2ERKS_
};
