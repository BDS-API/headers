#pragma once

#include "ExpressionNode.h"
#include "BoneOrientation.h"
#include "../bedrock/util/Vec3.h"
#include "RenderParams.h"
#include "../json/Value.h"


class ChannelTransform {

public:
    void toJson(Json::Value &)const;
    ChannelTransform(ChannelTransform const&);
    ChannelTransform(ExpressionNode const&, Vec3 const&);
    ChannelTransform(ExpressionNode const&, int);
    ChannelTransform(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
//  void animate(RenderParams &, BoneOrientation &, float, BoneTransformType)const; //TODO: incomplete function definition
    ~ChannelTransform();
    ChannelTransform(ExpressionNode const&);
    void operator==(ChannelTransform const&)const;
};
