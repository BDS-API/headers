#pragma once

class BoneAnimationChannel {

public:

    BoneAnimationChannel(BoneTransformType);
    BoneAnimationChannel(BoneTransformType, ExpressionNode const&);
    BoneAnimationChannel(BoneTransformType, ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    void addKeyFrame(float);
    void getKeyFrames(void)const;
    void getKeyFrames(void);
    void sortKeyFrames(void);
    void toJson(Json::Value &)const;
    void animate(RenderParams &, BoneOrientation &, float)const;
    void getMaxKeyFrameTime(void)const;
    BoneAnimationChannel(BoneAnimationChannel&&);
    BoneAnimationChannel(BoneAnimationChannel const&);
};
