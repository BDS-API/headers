#pragma once



class MCRESULT {

public:
    bool isSuccess()const;
//  MCRESULT(bool, MCCATEGORY, unsigned short); //TODO: incomplete function definition
    void getFullCode()const;
    void operator!=(MCRESULT const&)const;
    bool isSuccess(int);
    MCRESULT(int);
    void operator==(MCRESULT const&)const;
};
