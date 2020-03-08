#pragma once



class MCRESULT {

public:

    MCRESULT(bool, MCCATEGORY, unsigned short);
    MCRESULT(int);
    bool isSuccess()const;
    bool isSuccess(int);
    void getFullCode()const;
};
