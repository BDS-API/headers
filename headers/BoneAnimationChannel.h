#pragma once

class BoneAnimationChannel {

public:

    void BoneAnimationChannel(BoneTransformType);
    void BoneAnimationChannel(BoneTransformType, ExpressionNode const&);
    void BoneAnimationChannel(BoneTransformType, ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    void addKeyFrame(float);
    void getKeyFrames(void)const;
    void getKeyFrames(void);
    void sortKeyFrames(void);
    void toJson(Json::Value &)const;
    void animate(RenderParams &, BoneOrientation &, float)const;
    void getMaxKeyFrameTime(void)const;
    void BoneAnimationChannel(BoneAnimationChannel&&);
    void BoneAnimationChannel(BoneAnimationChannel const&);
};
