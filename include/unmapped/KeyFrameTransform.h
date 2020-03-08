#pragma once

#include "../bedrock/util/Vec3"
#include "../json/Value"


class KeyFrameTransform {

public:

    KeyFrameTransform(float);
    KeyFrameTransform(ExpressionNode const&, float);
    KeyFrameTransform(float, ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    void set(ExpressionNode const&);
    void set(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    void set(ExpressionNode const&, int);
    void set(ExpressionNode const&, Vec3 const&);
    void setPre(ExpressionNode const&);
    void setPost(ExpressionNode const&);
    void preAndPostAreTheSame()const;
    void setPre(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    void setPost(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    void setPre(ExpressionNode const&, int);
    void setPost(ExpressionNode const&, int);
    void setPre(ExpressionNode const&, Vec3 const&);
    void setPost(ExpressionNode const&, Vec3 const&);
    void computeCubicPolynomial(KeyFrameTransform*, KeyFrameTransform&, KeyFrameTransform&, KeyFrameTransform*);
    void toJson(Json::Value &)const;
    void animate(RenderParams &, BoneOrientation &, float, BoneTransformType)const;
    void getTime()const;
    void getLerpMode();
    void getLerpMode()const;
    KeyFrameTransform(KeyFrameTransform&&);
    KeyFrameTransform(KeyFrameTransform const&);
};
