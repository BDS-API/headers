#pragma once



namespace Bedrock {

    namespace Threading {

        void ON_SERVER_THREAD();
//      void IS_MAIN_THREAD(std::thread::id const&); //TODO: incomplete function definition
//      void MakeErrorCode(Bedrock::Threading::AsyncErrc); //TODO: incomplete function definition
//      void ASSIGN_SERVER_THREAD(std::thread::id const&); //TODO: incomplete function definition
        void ON_MAIN_THREAD();
//      void ASSIGN_MAIN_THREAD(std::thread::id const&); //TODO: incomplete function definition
        void GetAsyncErrorCategory();
        void GET_MAIN_THREAD_ID();
    };
}
