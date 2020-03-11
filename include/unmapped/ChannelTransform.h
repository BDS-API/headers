#pragma once

#include "./ExpressionNode.h"
#include "../bedrock/util/Vec3.h"
#include "../json/Value.h"
#include "./BoneOrientation.h"
#include "./RenderParams.h"
#include "./ChannelTransform.h"


class ChannelTransform {

public:

    ChannelTransform(ExpressionNode const&);
    ChannelTransform(ExpressionNode const&, Vec3 const&);
    ChannelTransform(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    ChannelTransform(ExpressionNode const&, int);
    void operator==(ChannelTransform const&)const;
//  void animate(RenderParams &, BoneOrientation &, float, BoneTransformType)const; //TODO: incomplete function definition
    void toJson(Json::Value &)const;
    ~ChannelTransform();
    ChannelTransform(ChannelTransform const&);
};
