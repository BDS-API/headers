#pragma once

#include "./ExpressionNode.h"
#include "../bedrock/util/Vec3.h"
#include "./KeyFrameTransformData.h"
#include "../json/Value.h"
#include "./BoneOrientation.h"
#include "./RenderParams.h"


class KeyFrameTransformData {

public:

    void operator==(KeyFrameTransformData const&)const;
    void operator!=(KeyFrameTransformData const&)const;
    void addChannelTransform(ExpressionNode const&);
    void addChannelTransform(ExpressionNode const&, int);
    void addChannelTransform(ExpressionNode const&, Vec3 const&);
    void addChannelTransform(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
//  void animate(RenderParams &, BoneOrientation &, float, BoneTransformType)const; //TODO: incomplete function definition
    bool isConstant()const;
    void getSequencedTransformCount()const;
    void operator[](unsigned long);
    void operator[](unsigned long)const;
    void toJson(Json::Value &)const;
    KeyFrameTransformData();
    ~KeyFrameTransformData();
    KeyFrameTransformData(KeyFrameTransformData &&);
    KeyFrameTransformData(KeyFrameTransformData const&);
};
