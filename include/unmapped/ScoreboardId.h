#pragma once



class ScoreboardId {

public:
    static long INVALID;

    ScoreboardId(); // _ZN12ScoreboardIdC2Ev
    ScoreboardId(long); // _ZN12ScoreboardIdC2El
    ScoreboardId(ScoreboardId const&); // _ZN12ScoreboardIdC2ERKS_
    void getHash()const; // _ZNK12ScoreboardId7getHashEv
    void operator==(ScoreboardId const&)const; // _ZNK12ScoreboardIdeqERKS_
    void operator!=(ScoreboardId const&)const; // _ZNK12ScoreboardIdneERKS_
    void operator>(ScoreboardId const&)const; // _ZNK12ScoreboardIdgtERKS_
    void operator<(ScoreboardId const&)const; // _ZNK12ScoreboardIdltERKS_
    void getIdentityDef()const; // _ZNK12ScoreboardId14getIdentityDefEv
};
