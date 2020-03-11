#pragma once



class KeyFrameLerpMode {

public:

    void getLerpStyle()const;
//  void setPrecomputedCubicCoeffs(glm::tmat4x40<float, (glm::precision>); //TODO: incomplete function definition
    void getPrecomputedCubicCoeffs()const;
    void lerp(float)const;
    bool isCubic()const;
//  void setLerpStyle(KeyFrameLerpStyle); //TODO: incomplete function definition
    KeyFrameLerpMode();
};
