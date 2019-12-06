#pragma once

class KeyFrameTransformData {

public:

    void addChannelTransform(ExpressionNode const&);
    void addChannelTransform(ExpressionNode const&, int);
    void addChannelTransform(ExpressionNode const&, Vec3 const&);
    void addChannelTransform(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    void animate(RenderParams &, BoneOrientation &, float, BoneTransformType)const;
    bool isConstant(void)const;
    void getSequencedTransformCount(void)const;
    void toJson(Json::Value &)const;
    void KeyFrameTransformData(void);
    void KeyFrameTransformData(KeyFrameTransformData&&);
    void KeyFrameTransformData(KeyFrameTransformData const&);
};
