#pragma once



namespace Core {

    namespace Profile {

        class CPUProfileToken {

        public:
            CPUProfileToken(); // _ZN4Core7Profile15CPUProfileTokenC2Ev
            CPUProfileToken(unsigned long, char const*, char const*, unsigned int); // _ZN4Core7Profile15CPUProfileTokenC2EmPKcS3_j
            bool isValid()const; // _ZNK4Core7Profile15CPUProfileToken7isValidEv
        };
    }
}
