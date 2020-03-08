#pragma once



class KeyFrameLerpMode {

public:

    void getLerpStyle()const;
    void setPrecomputedCubicCoeffs(glm::tmat4x40<float, (glm::precision>);
    void getPrecomputedCubicCoeffs()const;
    void lerp(float)const;
    bool isCubic()const;
    void setLerpStyle(KeyFrameLerpStyle);
    KeyFrameLerpMode(void);
};
