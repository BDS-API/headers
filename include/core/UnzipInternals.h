#pragma once



namespace Core {

    class UnzipInternals {

    public:
        UnzipInternals(void *);
        ~UnzipInternals();
        void set(void *);
        void get()const;
        void get();
    };
}
