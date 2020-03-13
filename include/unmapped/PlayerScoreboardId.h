#pragma once



class PlayerScoreboardId {

public:
    static long INVALID;

    PlayerScoreboardId(); // _ZN18PlayerScoreboardIdC2Ev
    PlayerScoreboardId(long); // _ZN18PlayerScoreboardIdC2El
    void operator==(PlayerScoreboardId const&)const; // _ZNK18PlayerScoreboardIdeqERKS_
    void operator!=(PlayerScoreboardId const&)const; // _ZNK18PlayerScoreboardIdneERKS_
    void getHash()const; // _ZNK18PlayerScoreboardId7getHashEv
};
