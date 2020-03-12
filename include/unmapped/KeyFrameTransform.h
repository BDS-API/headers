#pragma once



class KeyFrameTransform {

public:
    void setPost(ExpressionNode const&);
    void set(ExpressionNode const&);
    KeyFrameTransform(ExpressionNode const&, float);
    KeyFrameTransform(KeyFrameTransform &&);
    void toJson(Json::Value &)const;
    void set(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    void setPre(ExpressionNode const&);
    ~KeyFrameTransform();
    void setPost(ExpressionNode const&, Vec3 const&);
    void setPre(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
//  void animate(RenderParams &, BoneOrientation &, float, BoneTransformType)const; //TODO: incomplete function definition
    void preAndPostAreTheSame()const;
    void setPre(ExpressionNode const&, Vec3 const&);
    void setPost(ExpressionNode const&, int);
    KeyFrameTransform(float);
    void getLerpMode();
    void set(ExpressionNode const&, Vec3 const&);
    void getTime()const;
    void computeCubicPolynomial(KeyFrameTransform *, KeyFrameTransform &, KeyFrameTransform &, KeyFrameTransform *);
    void set(ExpressionNode const&, int);
    KeyFrameTransform(float, ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    void setPost(ExpressionNode const&, ExpressionNode const&, ExpressionNode const&);
    void getLerpMode()const;
    void setPre(ExpressionNode const&, int);
    KeyFrameTransform(KeyFrameTransform const&);
};
