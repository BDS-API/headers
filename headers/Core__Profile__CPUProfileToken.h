#pragma once

class Core::Profile::CPUProfileToken {

public:

    void CPUProfileToken(void);
    void CPUProfileToken(unsigned long, char const*, char const*, unsigned int);
    bool isValid(void)const;
};
