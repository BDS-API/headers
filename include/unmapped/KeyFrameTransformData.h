#pragma once

#include "ExpressionNode.h"
#include "BoneOrientation.h"
#include "../bedrock/util/Vec3.h"
#include "RenderParams.h"
#include "../json/Value.h"


class KeyFrameTransformData {

public:
    void getSequencedTransformCount()const;
    bool isConstant()const;
    void addChannelTransform(ExpressionNode const&, Vec3 const&);
    void toJson(Json::Value &)const;
    void operator==(KeyFrameTransformData const&)const;
    void operator[](unsigned long)const;
//  void animate(RenderParams &, BoneOrientation &, float, BoneTransformType)const; //TODO: incomplete function definition
    void addChannelTransform(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    KeyFrameTransformData(KeyFrameTransformData &&);
    void addChannelTransform(ExpressionNode const&, int);
    void operator[](unsigned long);
    void operator!=(KeyFrameTransformData const&)const;
    KeyFrameTransformData();
    KeyFrameTransformData(KeyFrameTransformData const&);
    void addChannelTransform(ExpressionNode const&);
    ~KeyFrameTransformData();
};
