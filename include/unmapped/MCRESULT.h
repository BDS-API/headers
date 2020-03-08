#pragma once



class MCRESULT {

public:

    MCRESULT(bool, MCCATEGORY, unsigned short);
    MCRESULT(int);
    bool isSuccess(void)const;
    bool isSuccess(int);
    void getFullCode(void)const;
};
