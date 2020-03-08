#pragma once



using namespace RakNet;

class BitStream {

public:

    void SetReadOffset(unsigned int);
    void DoEndianSwap();
    void IsNetworkOrder();
    void GetData()const;
    void GetNumberOfBytesUsed()const;
    void GetNumberOfUnreadBits()const;
    void GetInstance();
    void DestroyInstance(RakNet::BitStream*);
    BitStream(void);
    BitStream(unsigned int);
    BitStream(unsigned char *, unsigned int, bool);
    void SetNumberOfBitsAllocated(unsigned int);
    void Reset();
    void Write(char const*, unsigned int);
    void AddBitsAndReallocate(unsigned int);
    void WriteBits(unsigned char const*, unsigned int, bool);
    void Write(RakNet::BitStream*);
    void Write(RakNet::BitStream*, unsigned int);
    void Write(RakNet::BitStream&, unsigned int);
    void Write(RakNet::BitStream&);
    void Read(RakNet::BitStream*, unsigned int);
    void Read(RakNet::BitStream*);
    void Read(RakNet::BitStream&, unsigned int);
    void Read(RakNet::BitStream&);
    void Read(char *, unsigned int);
    void ReadBits(unsigned char *, unsigned int, bool);
    void ResetReadPointer();
    void ResetWritePointer();
    void Write0();
    void Write1();
    void ReadBit();
    void WriteAlignedBytes(unsigned char const*, unsigned int);
    void EndianSwapBytes(int, int);
    void ReverseBytesInPlace(unsigned char *, unsigned int);
    void WriteAlignedBytesSafe(char const*, unsigned int, unsigned int);
    void ReadAlignedBytes(unsigned char *, unsigned int);
    void ReadAlignedBytesSafe(char *, int &, int);
    void ReadAlignedBytesSafe(char *, unsigned int &, unsigned int);
    void ReadAlignedBytesSafeAlloc(char **, int &, unsigned int);
    void ReadAlignedBytesSafeAlloc(char **, unsigned int &, unsigned int);
    void SetData(unsigned char *);
    void WriteCompressed(unsigned char const*, unsigned int, bool);
    void ReadCompressed(unsigned char *, unsigned int, bool);
    void GetNumberOfBitsAllocated()const;
    void PadWithZeroToByteLength(unsigned int);
    void NumberOfLeadingZeroes(signed const);
    void NumberOfLeadingZeroes(unsigned char);
    void NumberOfLeadingZeroes(short);
    void NumberOfLeadingZeroes(unsigned short);
    void NumberOfLeadingZeroes(int);
    void NumberOfLeadingZeroes(unsigned int);
    void NumberOfLeadingZeroes(long);
    void NumberOfLeadingZeroes(unsigned long);
    void AssertStreamEmpty();
    void PrintBits(char *)const;
    void PrintBits()const;
    void PrintHex(char *)const;
    void PrintHex()const;
    void CopyData(unsigned char **)const;
    void IgnoreBits(unsigned int);
    void IgnoreBytes(unsigned int);
    void SetWriteOffset(unsigned int);
    void AssertCopyData();
    void IsNetworkOrderInternal();
    void ReverseBytes(unsigned char *, unsigned char *, unsigned int);
    void Read(char *);
    void Read(unsigned char *);
    void WriteAlignedVar8(char const*);
    void ReadAlignedVar8(char *);
    void WriteAlignedVar16(char const*);
    void ReadAlignedVar16(char *);
    void WriteAlignedVar32(char const*);
    void ReadAlignedVar32(char *);
    void ReadFloat16(float &, float, float);
    void SerializeFloat16(bool, float &, float, float);
    void WriteFloat16(float, float, float);
    void GetNumberOfBitsUsed()const;
    void GetReadOffset()const;
    void AlignWriteToByteBoundary();
    void AlignReadToByteBoundary();
    void GetWriteOffset()const;
    void IsBigEndian();
};
