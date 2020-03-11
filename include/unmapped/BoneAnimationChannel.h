#pragma once

#include "./ExpressionNode.h"
#include "../json/Value.h"
#include "./BoneOrientation.h"
#include "./RenderParams.h"
#include "./BoneAnimationChannel.h"


class BoneAnimationChannel {

public:

//  BoneAnimationChannel(BoneTransformType); //TODO: incomplete function definition
//  BoneAnimationChannel(BoneTransformType, ExpressionNode const&); //TODO: incomplete function definition
//  BoneAnimationChannel(BoneTransformType, ExpressionNode const&, ExpressionNode const&, ExpressionNode const&); //TODO: incomplete function definition
    void addKeyFrame(float);
    void getKeyFrames()const;
    void getKeyFrames();
    void sortKeyFrames();
    void toJson(Json::Value &)const;
    void animate(RenderParams &, BoneOrientation &, float)const;
    void getMaxKeyFrameTime()const;
    BoneAnimationChannel(BoneAnimationChannel &&);
    ~BoneAnimationChannel();
    BoneAnimationChannel(BoneAnimationChannel const&);
};
