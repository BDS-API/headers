#pragma once



class IsotropicFaceData {

public:
    void getFaceTextureIsotropic();
    void setTextureIsotropic(Json::Value const&);
    IsotropicFaceData();
    void setAllFacesEnabled();
    bool isTextureIsotropic(unsigned char)const;
    void setNoFacesIsotropic();
    void setAllFacesIsotropic();
    bool isFaceIsotropicEnabled(unsigned char)const;
    void setTextureIsotropic(unsigned int);
};
