#pragma once



namespace GUIDGenerator {

    static long once_control;

    void InitOnceImpl();
    bool BytesToUInt32(unsigned char const*);
//  void CreateGUID(MDGUID *); //TODO: incomplete function definition
    void InitOnce();
    void UInt32ToBytes(unsigned char *, unsigned int);
};
