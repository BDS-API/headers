#pragma once



namespace RakNet {

    class BitStream {

    public:
        void SetReadOffset(unsigned int); // _ZN6RakNet9BitStream13SetReadOffsetEj
        void DoEndianSwap(); // _ZN6RakNet9BitStream12DoEndianSwapEv
        bool IsNetworkOrder(); // _ZN6RakNet9BitStream14IsNetworkOrderEv
        void GetData()const; // _ZNK6RakNet9BitStream7GetDataEv
        void GetNumberOfBytesUsed()const; // _ZNK6RakNet9BitStream20GetNumberOfBytesUsedEv
        void GetNumberOfUnreadBits()const; // _ZNK6RakNet9BitStream21GetNumberOfUnreadBitsEv
        void GetInstance(); // _ZN6RakNet9BitStream11GetInstanceEv
        void DestroyInstance(RakNet::BitStream *); // _ZN6RakNet9BitStream15DestroyInstanceEPS0_
        BitStream(); // _ZN6RakNet9BitStreamC2Ev
        BitStream(unsigned int); // _ZN6RakNet9BitStreamC2Ej
        BitStream(unsigned char *, unsigned int, bool); // _ZN6RakNet9BitStreamC2EPhjb
        void SetNumberOfBitsAllocated(unsigned int); // _ZN6RakNet9BitStream24SetNumberOfBitsAllocatedEj
        ~BitStream(); // _ZN6RakNet9BitStreamD2Ev
        void Reset(); // _ZN6RakNet9BitStream5ResetEv
        void Write(char const*, unsigned int); // _ZN6RakNet9BitStream5WriteEPKcj
        void AddBitsAndReallocate(unsigned int); // _ZN6RakNet9BitStream20AddBitsAndReallocateEj
        void WriteBits(unsigned char const*, unsigned int, bool); // _ZN6RakNet9BitStream9WriteBitsEPKhjb
        void Write(RakNet::BitStream *); // _ZN6RakNet9BitStream5WriteEPS0_
        void Write(RakNet::BitStream *, unsigned int); // _ZN6RakNet9BitStream5WriteEPS0_j
        void Write(RakNet::BitStream &, unsigned int); // _ZN6RakNet9BitStream5WriteERS0_j
        void Write(RakNet::BitStream &); // _ZN6RakNet9BitStream5WriteERS0_
        void Read(RakNet::BitStream *, unsigned int); // _ZN6RakNet9BitStream4ReadEPS0_j
        void Read(RakNet::BitStream *); // _ZN6RakNet9BitStream4ReadEPS0_
        void Read(RakNet::BitStream &, unsigned int); // _ZN6RakNet9BitStream4ReadERS0_j
        void Read(RakNet::BitStream &); // _ZN6RakNet9BitStream4ReadERS0_
        void Read(char *, unsigned int); // _ZN6RakNet9BitStream4ReadEPcj
        void ReadBits(unsigned char *, unsigned int, bool); // _ZN6RakNet9BitStream8ReadBitsEPhjb
        void ResetReadPointer(); // _ZN6RakNet9BitStream16ResetReadPointerEv
        void ResetWritePointer(); // _ZN6RakNet9BitStream17ResetWritePointerEv
        void Write0(); // _ZN6RakNet9BitStream6Write0Ev
        void Write1(); // _ZN6RakNet9BitStream6Write1Ev
        void ReadBit(); // _ZN6RakNet9BitStream7ReadBitEv
        void WriteAlignedBytes(unsigned char const*, unsigned int); // _ZN6RakNet9BitStream17WriteAlignedBytesEPKhj
        void EndianSwapBytes(int, int); // _ZN6RakNet9BitStream15EndianSwapBytesEii
        void ReverseBytesInPlace(unsigned char *, unsigned int); // _ZN6RakNet9BitStream19ReverseBytesInPlaceEPhj
        void WriteAlignedBytesSafe(char const*, unsigned int, unsigned int); // _ZN6RakNet9BitStream21WriteAlignedBytesSafeEPKcjj
        void ReadAlignedBytes(unsigned char *, unsigned int); // _ZN6RakNet9BitStream16ReadAlignedBytesEPhj
        void ReadAlignedBytesSafe(char *, int &, int); // _ZN6RakNet9BitStream20ReadAlignedBytesSafeEPcRii
        void ReadAlignedBytesSafe(char *, unsigned int &, unsigned int); // _ZN6RakNet9BitStream20ReadAlignedBytesSafeEPcRjj
        void ReadAlignedBytesSafeAlloc(char **, int &, unsigned int); // _ZN6RakNet9BitStream25ReadAlignedBytesSafeAllocEPPcRij
        void ReadAlignedBytesSafeAlloc(char **, unsigned int &, unsigned int); // _ZN6RakNet9BitStream25ReadAlignedBytesSafeAllocEPPcRjj
        void SetData(unsigned char *); // _ZN6RakNet9BitStream7SetDataEPh
        void WriteCompressed(unsigned char const*, unsigned int, bool); // _ZN6RakNet9BitStream15WriteCompressedEPKhjb
        void ReadCompressed(unsigned char *, unsigned int, bool); // _ZN6RakNet9BitStream14ReadCompressedEPhjb
        void GetNumberOfBitsAllocated()const; // _ZNK6RakNet9BitStream24GetNumberOfBitsAllocatedEv
        void PadWithZeroToByteLength(unsigned int); // _ZN6RakNet9BitStream23PadWithZeroToByteLengthEj
//      void NumberOfLeadingZeroes(signed const); //TODO: incomplete function definition // _ZN6RakNet9BitStream21NumberOfLeadingZeroesEa
        void NumberOfLeadingZeroes(unsigned char); // _ZN6RakNet9BitStream21NumberOfLeadingZeroesEh
        void NumberOfLeadingZeroes(short); // _ZN6RakNet9BitStream21NumberOfLeadingZeroesEs
        void NumberOfLeadingZeroes(unsigned short); // _ZN6RakNet9BitStream21NumberOfLeadingZeroesEt
        void NumberOfLeadingZeroes(int); // _ZN6RakNet9BitStream21NumberOfLeadingZeroesEi
        void NumberOfLeadingZeroes(unsigned int); // _ZN6RakNet9BitStream21NumberOfLeadingZeroesEj
        void NumberOfLeadingZeroes(long); // _ZN6RakNet9BitStream21NumberOfLeadingZeroesEl
        void NumberOfLeadingZeroes(unsigned long); // _ZN6RakNet9BitStream21NumberOfLeadingZeroesEm
        void AssertStreamEmpty(); // _ZN6RakNet9BitStream17AssertStreamEmptyEv
        void PrintBits(char *)const; // _ZNK6RakNet9BitStream9PrintBitsEPc
        void PrintBits()const; // _ZNK6RakNet9BitStream9PrintBitsEv
        void PrintHex(char *)const; // _ZNK6RakNet9BitStream8PrintHexEPc
        void PrintHex()const; // _ZNK6RakNet9BitStream8PrintHexEv
        void CopyData(unsigned char **)const; // _ZNK6RakNet9BitStream8CopyDataEPPh
        void IgnoreBits(unsigned int); // _ZN6RakNet9BitStream10IgnoreBitsEj
        void IgnoreBytes(unsigned int); // _ZN6RakNet9BitStream11IgnoreBytesEj
        void SetWriteOffset(unsigned int); // _ZN6RakNet9BitStream14SetWriteOffsetEj
        void AssertCopyData(); // _ZN6RakNet9BitStream14AssertCopyDataEv
        bool IsNetworkOrderInternal(); // _ZN6RakNet9BitStream22IsNetworkOrderInternalEv
        void ReverseBytes(unsigned char *, unsigned char *, unsigned int); // _ZN6RakNet9BitStream12ReverseBytesEPhS1_j
        void Read(char *); // _ZN6RakNet9BitStream4ReadEPc
        void Read(unsigned char *); // _ZN6RakNet9BitStream4ReadEPh
        void WriteAlignedVar8(char const*); // _ZN6RakNet9BitStream16WriteAlignedVar8EPKc
        void ReadAlignedVar8(char *); // _ZN6RakNet9BitStream15ReadAlignedVar8EPc
        void WriteAlignedVar16(char const*); // _ZN6RakNet9BitStream17WriteAlignedVar16EPKc
        void ReadAlignedVar16(char *); // _ZN6RakNet9BitStream16ReadAlignedVar16EPc
        void WriteAlignedVar32(char const*); // _ZN6RakNet9BitStream17WriteAlignedVar32EPKc
        void ReadAlignedVar32(char *); // _ZN6RakNet9BitStream16ReadAlignedVar32EPc
        void ReadFloat16(float &, float, float); // _ZN6RakNet9BitStream11ReadFloat16ERfff
        void SerializeFloat16(bool, float &, float, float); // _ZN6RakNet9BitStream16SerializeFloat16EbRfff
        void WriteFloat16(float, float, float); // _ZN6RakNet9BitStream12WriteFloat16Efff
        void GetNumberOfBitsUsed()const; // _ZNK6RakNet9BitStream19GetNumberOfBitsUsedEv
        void GetReadOffset()const; // _ZNK6RakNet9BitStream13GetReadOffsetEv
        void AlignWriteToByteBoundary(); // _ZN6RakNet9BitStream24AlignWriteToByteBoundaryEv
        void AlignReadToByteBoundary(); // _ZN6RakNet9BitStream23AlignReadToByteBoundaryEv
        void GetWriteOffset()const; // _ZNK6RakNet9BitStream14GetWriteOffsetEv
        bool IsBigEndian(); // _ZN6RakNet9BitStream11IsBigEndianEv
    };
}
