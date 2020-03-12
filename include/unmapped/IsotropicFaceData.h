#pragma once

#include "../json/Value.h"


class IsotropicFaceData {

public:
    bool isFaceIsotropicEnabled(unsigned char)const;
    void setTextureIsotropic(Json::Value const&);
    void setTextureIsotropic(unsigned int);
    void setAllFacesEnabled();
    IsotropicFaceData();
    void setAllFacesIsotropic();
    void getFaceTextureIsotropic();
    bool isTextureIsotropic(unsigned char)const;
    void setNoFacesIsotropic();
};
