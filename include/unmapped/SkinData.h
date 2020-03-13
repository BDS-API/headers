#pragma once



class SkinData {

public:
    SkinData(SkinData &&); // _ZN8SkinDataC2EOS_
    SkinData(Actor const&); // _ZN8SkinDataC2ERK5Actor
    SkinData(int, int); // _ZN8SkinDataC2Eii
    SkinData(Json::Value const&); // _ZN8SkinDataC2ERKN4Json5ValueE
    void serialize()const; // _ZNK8SkinData9serializeEv
    void applyToActor(Actor &)const; // _ZNK8SkinData12applyToActorER5Actor
    void softMatch(SkinData const&, bool &)const; // _ZNK8SkinData9softMatchERKS_Rb
};
