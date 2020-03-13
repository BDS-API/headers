#pragma once



namespace Bedrock {

    namespace Threading {

        void GetAsyncErrorCategory(); // _ZN7Bedrock9Threading21GetAsyncErrorCategoryEv
//      void MakeErrorCode(Bedrock::Threading::AsyncErrc); //TODO: incomplete function definition // _ZN7Bedrock9Threading13MakeErrorCodeENS0_9AsyncErrcE
        void ON_MAIN_THREAD(); // _ZN7Bedrock9Threading14ON_MAIN_THREADEv
//      void IS_MAIN_THREAD(std::thread::id const&); //TODO: incomplete function definition // _ZN7Bedrock9Threading14IS_MAIN_THREADERKNSt6thread2idE
        void ON_SERVER_THREAD(); // _ZN7Bedrock9Threading16ON_SERVER_THREADEv
//      void ASSIGN_MAIN_THREAD(std::thread::id const&); //TODO: incomplete function definition // _ZN7Bedrock9Threading18ASSIGN_MAIN_THREADERKNSt6thread2idE
//      void ASSIGN_SERVER_THREAD(std::thread::id const&); //TODO: incomplete function definition // _ZN7Bedrock9Threading20ASSIGN_SERVER_THREADERKNSt6thread2idE
        void GET_MAIN_THREAD_ID(); // _ZN7Bedrock9Threading18GET_MAIN_THREAD_IDEv
    };
}
