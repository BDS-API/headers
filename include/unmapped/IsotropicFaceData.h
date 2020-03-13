#pragma once



class IsotropicFaceData {

public:
    IsotropicFaceData(); // _ZN17IsotropicFaceDataC2Ev
    void setTextureIsotropic(unsigned int); // _ZN17IsotropicFaceData19setTextureIsotropicEj
    void setTextureIsotropic(Json::Value const&); // _ZN17IsotropicFaceData19setTextureIsotropicERKN4Json5ValueE
    void setAllFacesIsotropic(); // _ZN17IsotropicFaceData20setAllFacesIsotropicEv
    void setNoFacesIsotropic(); // _ZN17IsotropicFaceData19setNoFacesIsotropicEv
    bool isTextureIsotropic(unsigned char)const; // _ZNK17IsotropicFaceData18isTextureIsotropicEh
    bool isFaceIsotropicEnabled(unsigned char)const; // _ZNK17IsotropicFaceData22isFaceIsotropicEnabledEh
    void getFaceTextureIsotropic(); // _ZN17IsotropicFaceData23getFaceTextureIsotropicEv
    void setAllFacesEnabled(); // _ZN17IsotropicFaceData18setAllFacesEnabledEv
};
