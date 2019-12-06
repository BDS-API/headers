#pragma once

class MCRESULT {

public:

    void MCRESULT(bool, MCCATEGORY, unsigned short);
    void MCRESULT(int);
    bool isSuccess(void)const;
    bool isSuccess(int);
    void getFullCode(void)const;
};
