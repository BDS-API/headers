#pragma once

#include "../json/Value"


class BoneAnimationChannel {

public:

    BoneAnimationChannel(BoneTransformType);
    BoneAnimationChannel(BoneTransformType, ExpressionNode const&);
    BoneAnimationChannel(BoneTransformType, ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    void addKeyFrame(float);
    void getKeyFrames()const;
    void getKeyFrames();
    void sortKeyFrames();
    void toJson(Json::Value &)const;
    void animate(RenderParams &, BoneOrientation &, float)const;
    void getMaxKeyFrameTime()const;
    BoneAnimationChannel(BoneAnimationChannel&&);
    BoneAnimationChannel(BoneAnimationChannel const&);
};
