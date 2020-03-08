#pragma once



class KeyFrameLerpMode {

public:

    void getLerpStyle(void)const;
    void setPrecomputedCubicCoeffs(glm::tmat4x4<float, (glm::precision)0> const&);
    void getPrecomputedCubicCoeffs(void)const;
    void lerp(float)const;
    bool isCubic(void)const;
    void setLerpStyle(KeyFrameLerpStyle);
    KeyFrameLerpMode(void);
};
