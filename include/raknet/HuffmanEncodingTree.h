#pragma once



namespace RakNet {

    class HuffmanEncodingTree {

    public:
        void DecodeArray(RakNet::BitStream *, unsigned int, unsigned long, unsigned char *);
        void GenerateFromFrequencyTable(unsigned int *);
        void EncodeArray(unsigned char *, unsigned long, RakNet::BitStream *);
//      void InsertNodeIntoSortedList(HuffmanEncodingTreeNode *, DataStructures::LinkedList<HuffmanEncodingTreeNode *> *)const; //TODO: incomplete function definition
        HuffmanEncodingTree();
        void FreeMemory();
        void DecodeArray(unsigned char *, unsigned int, RakNet::BitStream *);
        ~HuffmanEncodingTree();
    };
}
