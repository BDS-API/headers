#pragma once

#include "../bedrock/util/Vec3"
#include "../json/Value"


class KeyFrameTransformData {

public:

    void addChannelTransform(ExpressionNode const&);
    void addChannelTransform(ExpressionNode const&, int);
    void addChannelTransform(ExpressionNode const&, Vec3 const&);
    void addChannelTransform(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    void animate(RenderParams &, BoneOrientation &, float, BoneTransformType)const;
    bool isConstant()const;
    void getSequencedTransformCount()const;
    void toJson(Json::Value &)const;
    KeyFrameTransformData(void);
    KeyFrameTransformData(KeyFrameTransformData&&);
    KeyFrameTransformData(KeyFrameTransformData const&);
};
