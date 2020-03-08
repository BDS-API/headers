#pragma once

#include "../bedrock/util/Vec3"
#include "../json/Value"


class ChannelTransform {

public:

    ChannelTransform(ExpressionNode const&);
    ChannelTransform(ExpressionNode const&, Vec3 const&);
    ChannelTransform(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    ChannelTransform(ExpressionNode const&, int);
    void animate(RenderParams &, BoneOrientation &, float, BoneTransformType)const;
    void toJson(Json::Value &)const;
    ChannelTransform(ChannelTransform const&);
};
