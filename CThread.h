#include "ThreadState.h"
class CThread
{
public:
    CThread();
    CThread(bool createsuspended, bool detach);
    virtual ~CThread();
    virtual void Run() = 0;
    void SetThreadState(ThreadState state)
    {
        m_ThreadState = state;
    }
    ThreadState GetThreadState()
    {
        return m_ThreadState;
    }
    bool Terminate();
    bool Start();
    bool Exit();
    bool Wakeup();
    int GetLastError()
    {
        return m_ErrCode;
    }
    void SetThreadName(char* thrname)
    {
        strcpy(m_ThreadName, thrname);
    }
    char* GetThreadName()
    {
        return m_ThreadName;
    }
    int GetThreadID()
    {
        return m_ThreadID;
    }
private:
    bool m_Detach;
    bool m_CreateSuspended;
    int m_ErrCode;
    ThreadState m_ThreadState;
    char m_ThreadState[100];
};
