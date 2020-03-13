#pragma once



class MCRESULT {

public:
//  MCRESULT(bool, MCCATEGORY, unsigned short); //TODO: incomplete function definition // _ZN8MCRESULTC2Eb10MCCATEGORYt
    MCRESULT(int); // _ZN8MCRESULTC2Ei
    void operator==(MCRESULT const&)const; // _ZNK8MCRESULTeqERKS_
    void operator!=(MCRESULT const&)const; // _ZNK8MCRESULTneERKS_
    bool isSuccess()const; // _ZNK8MCRESULT9isSuccessEv
    bool isSuccess(int); // _ZN8MCRESULT9isSuccessEi
    void getFullCode()const; // _ZNK8MCRESULT11getFullCodeEv
};
