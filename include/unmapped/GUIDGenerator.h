#pragma once



namespace GUIDGenerator {

    static long once_control;

//  void CreateGUID(MDGUID *); //TODO: incomplete function definition // _ZN13GUIDGenerator10CreateGUIDEP6MDGUID
    bool BytesToUInt32(unsigned char const*); // _ZN13GUIDGenerator13BytesToUInt32EPKh
    void InitOnce(); // _ZN13GUIDGenerator8InitOnceEv
    void UInt32ToBytes(unsigned char *, unsigned int); // _ZN13GUIDGenerator13UInt32ToBytesEPhj
    void InitOnceImpl(); // _ZN13GUIDGenerator12InitOnceImplEv
};
