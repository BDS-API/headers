#pragma once



class GUIDGenerator {

public:
    static long once_control;


//  void CreateGUID(MDGUID *); //TODO: incomplete function definition
    bool BytesToUInt32(unsigned char const*);
    void InitOnce();
    void UInt32ToBytes(unsigned char *, unsigned int);
    void InitOnceImpl();
};
