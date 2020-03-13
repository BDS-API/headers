#pragma once



namespace mce {

    class Blob {

    public:
        void size()const; // _ZNK3mce4Blob4sizeEv
        void cbegin()const; // _ZNK3mce4Blob6cbeginEv
        void cend()const; // _ZNK3mce4Blob4cendEv
        void begin(); // _ZN3mce4Blob5beginEv
        void get(); // _ZN3mce4Blob3getEv
        void getSpan(); // _ZN3mce4Blob7getSpanEv
        void getSpan()const; // _ZNK3mce4Blob7getSpanEv
        Blob(); // _ZN3mce4BlobC2Ev
        Blob(unsigned long); // _ZN3mce4BlobC2Em
        Blob(unsigned char const*, unsigned long); // _ZN3mce4BlobC2EPKhm
        ~Blob(); // _ZN3mce4BlobD2Ev
        Blob(mce::Blob &&); // _ZN3mce4BlobC2EOS0_
        void end(); // _ZN3mce4Blob3endEv
        void swap(mce::Blob &); // _ZN3mce4Blob4swapERS0_
        void empty()const; // _ZNK3mce4Blob5emptyEv
        void data(); // _ZN3mce4Blob4dataEv
        void data()const; // _ZNK3mce4Blob4dataEv
        void get()const; // _ZNK3mce4Blob3getEv
    };
}
