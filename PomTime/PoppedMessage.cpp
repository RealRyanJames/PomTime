#include <iostream>
#include "./Types/Typed.cpp"

namespace AppendNameOutput
{

    int getSize(int size)
    {
        return size;
    }

    bool isInitCallable(int size = 2, bool isProcessed = true)
    {
        if (isProcessed && TypedMesh<int>(size) < 3)
        {
            return true;
        }

        return false;
    }

}

namespace AppliationTitle
{
    class TypedMeshPattern
    {
    public:
        static void GetSystemCall()
        {
            system("pause");
        }
    };

    void InitSetPause()
    {
        TypedMeshPattern::GetSystemCall();
    }
}