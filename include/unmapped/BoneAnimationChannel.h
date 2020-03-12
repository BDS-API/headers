#pragma once



class BoneAnimationChannel {

public:
    void addKeyFrame(float);
    void sortKeyFrames();
    void getKeyFrames()const;
    void getKeyFrames();
    void toJson(Json::Value &)const;
//  BoneAnimationChannel(BoneTransformType, ExpressionNode const&, ExpressionNode const&, ExpressionNode const&); //TODO: incomplete function definition
    void getMaxKeyFrameTime()const;
    void animate(RenderParams &, BoneOrientation &, float)const;
    BoneAnimationChannel(BoneAnimationChannel &&);
    ~BoneAnimationChannel();
//  BoneAnimationChannel(BoneTransformType, ExpressionNode const&); //TODO: incomplete function definition
//  BoneAnimationChannel(BoneTransformType); //TODO: incomplete function definition
    BoneAnimationChannel(BoneAnimationChannel const&);
};
