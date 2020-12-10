#include "CJob.h"
#include "CTheadPool.h"
class CThreadManage
{
public:
    CThreadManage();
    CThreadManage(int num);
    virtual ~CThreadManage();
    void SetParallelNum(int num);
    int GetParallelNum();
    void Run(CJob* job, void* jobdata);
    void TerminateAll();
private:
    CTheadPool* m_Pool;
    int m_NumOfThread;
}
