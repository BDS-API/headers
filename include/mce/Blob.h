#pragma once



namespace mce {

    class Blob {

    public:
        void getSpan()const;
        void begin();
        void cbegin()const;
        void get();
        Blob();
        Blob(unsigned long);
        void getSpan();
        ~Blob();
        void swap(mce::Blob &);
        void end();
        void size()const;
        Blob(unsigned char const*, unsigned long);
        void empty()const;
        void data()const;
        void data();
        void get()const;
        void cend()const;
        Blob(mce::Blob &&);
    };
}
