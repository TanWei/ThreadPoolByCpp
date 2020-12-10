#include "CThreadManage.h"
CThreadManage::CThreadManage()
{
    m_NumOfThread = 10;
    m_Pool = new CThreadPool(m_NumOfThread);
}

CThreadManage::CThreadManage(int num)
{
    m_NumOfThread = num;
    m_Pool = new CThreadPool(m_NumOfThread);
}

CThreadManage::~CThreadManage()
{
    if(NULL != m_Pool)
    {
        TerminateAll();
        delete m_Pool;
    }
}

void CThreadManage::SetParallelNum(int num)
{
    m_NumOfThread = num;
}

int CThreadManage::GetParallelNum()
{
    return m_NumOfThread;    
}

void CThreadManage::Run(CJob* job, void* jobdata)
{
   m_Pool->Run(job, jobdata); 
}
    
void CThreadManage::TerminateAll()
{
    m_Pool->TerminateAll();
}
