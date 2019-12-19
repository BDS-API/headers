#pragma once

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
    void preAndPostAreTheSame(void)const;
    void setPre(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    void setPost(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    void setPre(ExpressionNode const&, int);
    void setPost(ExpressionNode const&, int);
    void setPre(ExpressionNode const&, Vec3 const&);
    void setPost(ExpressionNode const&, Vec3 const&);
    void computeCubicPolynomial(KeyFrameTransform*, KeyFrameTransform&, KeyFrameTransform&, KeyFrameTransform*);
    void toJson(Json::Value &)const;
    void animate(RenderParams &, BoneOrientation &, float, BoneTransformType)const;
    void getTime(void)const;
    void getLerpMode(void);
    void getLerpMode(void)const;
    KeyFrameTransform(KeyFrameTransform&&);
    KeyFrameTransform(KeyFrameTransform const&);
};
