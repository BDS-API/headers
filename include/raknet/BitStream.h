#pragma once



namespace RakNet {

    class BitStream {

    public:
        void ReadAlignedBytesSafe(char *, unsigned int &, unsigned int);
        void Read(RakNet::BitStream &, unsigned int);
        void Write(RakNet::BitStream &);
        void PrintBits()const;
        void SetReadOffset(unsigned int);
        void SetData(unsigned char *);
        void GetData()const;
        void IgnoreBits(unsigned int);
        void ReverseBytes(unsigned char *, unsigned char *, unsigned int);
        void WriteAlignedVar16(char const*);
        void GetNumberOfUnreadBits()const;
        void ReadAlignedBytesSafeAlloc(char **, unsigned int &, unsigned int);
        void Read(unsigned char *);
        void PrintHex(char *)const;
        void Read(char *, unsigned int);
        void Read(RakNet::BitStream &);
        void WriteAlignedBytes(unsigned char const*, unsigned int);
        void ReadAlignedVar8(char *);
        bool IsBigEndian();
        void ReadAlignedVar16(char *);
        void PadWithZeroToByteLength(unsigned int);
        ~BitStream();
        void ReadAlignedBytesSafe(char *, int &, int);
        void Write0();
        void NumberOfLeadingZeroes(unsigned char);
        void GetNumberOfBitsAllocated()const;
        void AlignWriteToByteBoundary();
        void NumberOfLeadingZeroes(short);
        BitStream();
        void ReadFloat16(float &, float, float);
        void DestroyInstance(RakNet::BitStream *);
        void DoEndianSwap();
        void NumberOfLeadingZeroes(unsigned int);
        void Write1();
        void SetNumberOfBitsAllocated(unsigned int);
        void AssertCopyData();
        void GetNumberOfBytesUsed()const;
        void PrintBits(char *)const;
        bool IsNetworkOrder();
        void PrintHex()const;
        void Read(RakNet::BitStream *);
        void EndianSwapBytes(int, int);
        void ResetReadPointer();
        void AssertStreamEmpty();
        void ReadAlignedVar32(char *);
//      void NumberOfLeadingZeroes(signed const); //TODO: incomplete function definition
        void GetWriteOffset()const;
        void WriteBits(unsigned char const*, unsigned int, bool);
        void ReadAlignedBytes(unsigned char *, unsigned int);
        bool IsNetworkOrderInternal();
        void AddBitsAndReallocate(unsigned int);
        void ReadBit();
        void ReadCompressed(unsigned char *, unsigned int, bool);
        void CopyData(unsigned char **)const;
        void ReverseBytesInPlace(unsigned char *, unsigned int);
        BitStream(unsigned int);
        void NumberOfLeadingZeroes(unsigned short);
        void ResetWritePointer();
        void NumberOfLeadingZeroes(unsigned long);
        void NumberOfLeadingZeroes(int);
        void SetWriteOffset(unsigned int);
        void GetReadOffset()const;
        void WriteAlignedVar8(char const*);
        void Write(RakNet::BitStream *);
        void Write(char const*, unsigned int);
        void NumberOfLeadingZeroes(long);
        void AlignReadToByteBoundary();
        void Reset();
        void Write(RakNet::BitStream *, unsigned int);
        BitStream(unsigned char *, unsigned int, bool);
        void Read(RakNet::BitStream *, unsigned int);
        void ReadBits(unsigned char *, unsigned int, bool);
        void Write(RakNet::BitStream &, unsigned int);
        void GetNumberOfBitsUsed()const;
        void WriteAlignedBytesSafe(char const*, unsigned int, unsigned int);
        void GetInstance();
        void IgnoreBytes(unsigned int);
        void WriteFloat16(float, float, float);
        void WriteCompressed(unsigned char const*, unsigned int, bool);
        void ReadAlignedBytesSafeAlloc(char **, int &, unsigned int);
        void Read(char *);
        void SerializeFloat16(bool, float &, float, float);
        void WriteAlignedVar32(char const*);
    };
}
