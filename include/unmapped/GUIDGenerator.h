#pragma once



class GUIDGenerator {

public:
    static long once_control;


    void CreateGUID(MDGUID *);
    void BytesToUInt32(unsigned char const*);
    void InitOnce(void);
    void UInt32ToBytes(unsigned char *, unsigned int);
    void InitOnceImpl(void);
};
