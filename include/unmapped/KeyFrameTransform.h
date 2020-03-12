#pragma once

#include "ExpressionNode.h"
#include "BoneOrientation.h"
#include "../bedrock/util/Vec3.h"
#include "RenderParams.h"
#include "../json/Value.h"


class KeyFrameTransform {

public:
    void setPost(ExpressionNode const&);
    void setPre(ExpressionNode const&, int);
    void preAndPostAreTheSame()const;
    void getTime()const;
    void set(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    void toJson(Json::Value &)const;
//  void animate(RenderParams &, BoneOrientation &, float, BoneTransformType)const; //TODO: incomplete function definition
    void set(ExpressionNode const&, int);
    void set(ExpressionNode const&);
    KeyFrameTransform(KeyFrameTransform const&);
    void setPost(ExpressionNode const&, int);
    void getLerpMode()const;
    KeyFrameTransform(float);
    void setPost(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    void setPre(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    void setPost(ExpressionNode const&, Vec3 const&);
    void setPre(ExpressionNode const&);
    void set(ExpressionNode const&, Vec3 const&);
    ~KeyFrameTransform();
    void computeCubicPolynomial(KeyFrameTransform *, KeyFrameTransform &, KeyFrameTransform &, KeyFrameTransform *);
    KeyFrameTransform(KeyFrameTransform &&);
    void setPre(ExpressionNode const&, Vec3 const&);
    void getLerpMode();
    KeyFrameTransform(float, ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    KeyFrameTransform(ExpressionNode const&, float);
};
