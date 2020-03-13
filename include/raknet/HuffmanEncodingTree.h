#pragma once



namespace RakNet {

    class HuffmanEncodingTree {

    public:
        HuffmanEncodingTree(); // _ZN6RakNet19HuffmanEncodingTreeC2Ev
        ~HuffmanEncodingTree(); // _ZN6RakNet19HuffmanEncodingTreeD2Ev
        void FreeMemory(); // _ZN6RakNet19HuffmanEncodingTree10FreeMemoryEv
        void GenerateFromFrequencyTable(unsigned int *); // _ZN6RakNet19HuffmanEncodingTree26GenerateFromFrequencyTableEPj
//      void InsertNodeIntoSortedList(HuffmanEncodingTreeNode *, DataStructures::LinkedList<HuffmanEncodingTreeNode *> *)const; //TODO: incomplete function definition // _ZNK6RakNet19HuffmanEncodingTree24InsertNodeIntoSortedListEP23HuffmanEncodingTreeNodePN14DataStructures10LinkedListIS2_EE
        void EncodeArray(unsigned char *, unsigned long, RakNet::BitStream *); // _ZN6RakNet19HuffmanEncodingTree11EncodeArrayEPhmPNS_9BitStreamE
        void DecodeArray(RakNet::BitStream *, unsigned int, unsigned long, unsigned char *); // _ZN6RakNet19HuffmanEncodingTree11DecodeArrayEPNS_9BitStreamEjmPh
        void DecodeArray(unsigned char *, unsigned int, RakNet::BitStream *); // _ZN6RakNet19HuffmanEncodingTree11DecodeArrayEPhjPNS_9BitStreamE
    };
}
