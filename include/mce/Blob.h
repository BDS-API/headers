#pragma once



namespace mce {

    class Blob {

    public:
        Blob(unsigned long);
        void begin();
        void size()const;
        Blob(unsigned char const*, unsigned long);
        void cend()const;
        void cbegin()const;
        Blob(mce::Blob &&);
        void end();
        void empty()const;
        void data();
        void data()const;
        void get();
        void get()const;
        ~Blob();
        void getSpan();
        void getSpan()const;
        Blob();
        void swap(mce::Blob &);
    };
}
