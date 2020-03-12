#pragma once

#include "RenderParams.h"
#include "ExpressionNode.h"
#include "BoneOrientation.h"
#include "../json/Value.h"


class BoneAnimationChannel {

public:
//  BoneAnimationChannel(BoneTransformType); //TODO: incomplete function definition
    void animate(RenderParams &, BoneOrientation &, float)const;
//  BoneAnimationChannel(BoneTransformType, ExpressionNode const&); //TODO: incomplete function definition
    void addKeyFrame(float);
    BoneAnimationChannel(BoneAnimationChannel &&);
    void sortKeyFrames();
//  BoneAnimationChannel(BoneTransformType, ExpressionNode const&, ExpressionNode const&, ExpressionNode const&); //TODO: incomplete function definition
    void getMaxKeyFrameTime()const;
    ~BoneAnimationChannel();
    void getKeyFrames()const;
    void getKeyFrames();
    void toJson(Json::Value &)const;
    BoneAnimationChannel(BoneAnimationChannel const&);
};
